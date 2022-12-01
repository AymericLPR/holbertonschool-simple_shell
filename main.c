#include "main.h"

/**
 * main - access to simple shell
 * Return: Always 0.
 */

int main(void)
{
  char *line;
  pid_t pid;
  size_t len = 0;

  line = (char *)malloc(len * sizeof(char));
  if (line == NULL)
    {
      perror("Code nonexistent");
      return (-1);
    }

  pid = fork();
  
  if (pid == -1)
    {
      return (1);
    }
  if (pid == 0)
    {
      while (1)
	{
	  printf("$ ");
	  getline(&line, &len, stdin);
	  if (line[0] == 'e' && line[1] == 'x' && line[2] == 'i' && line[3] == 't')
	    {
	      free(line);
	      printf("exit\n");
	      exit(0);
	    }
	  else if (feof(stdin))
	    {
	      free(line);
	      printf("exit\n");
	      exit(0);
	    }
	  else
	    {
	      printf("%s\n",line);
	    }
	}
    }
  else
    {
      wait(NULL);
    }
  free(line);
  return (0);
}
