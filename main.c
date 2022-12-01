#include "main.h"

/**
 * main - access to simple shell
 * Return: Always 0.
 */

int main(void)
{
  char *line;
  pid_t pid = fork();
  size_t len = 0;
  size_t words;  

  if (line == NULL)
    {
      perror("Code nonexistent");
      return (-1);
    }
  if (pid == -1)
    {
      perror("Unsuccessful");
      return (1);
    }
  if (pid == 0)
    {
      while (!(words == feof))
	{
	  printf("$ ");
	  words = getline(&line, &len, stdin);
	  if (/* pas "exit" */)
	    {
	      printf("%s\n", line);
	    }
	  else
	    {
	      free(line);
	      line = NULL;
	      exit(0);
	    }
	}
      if (words == feof)
	{
	  free(line);
	  line = NULL;
	  exit(0);
	}
    }
  else
    {
      wait(NULL);
    }
  free(line);
  line = NULL;
  return (0);
}
