#include "main.h"

/**
 * main - access to simple shell
 * Return: Always 0.
 */

int main(int argc, char **argv, char **envp)
{
  char *line;
  pid_t pid;
  size_t len = 0;
  char **cmd;
  
  line = (char *)malloc(len * sizeof(char));
  while (1)
    {
      printf("$ ");
      getline(&line, &len, stdin);
      
      if (line == NULL)
	perror("Unsuccess");
      if (feof(stdin) || strcmp(line, "exit\n") == 0)
	{
	  printf("Exit successful\n");
	  exit(0);
	}
      else
	{
	  cmd = get_cmd(line);
	  frk(cmd, envp, argv[0]);
	}
    }
  free(line);
  return (0);
}
