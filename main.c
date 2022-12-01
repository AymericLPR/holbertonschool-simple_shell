#include "main.h"

/**
 * main - access to simple shell
 * Return: Always 0.
 */

int main(void)
{
  char *words;
  pid_t pid = fork();
  size_t len = 0;  

  if (words == NULL)
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
      while (1)
	{
	  printf("$ ");
	  getline(&words, &len, stdin);
	  if (!(words[0] == 'e' && words[1] == 'x' && words[2] == 'i' && words[3] == 't'))
	    {
	      printf("exit\n");
	      exit(0);
	    }
	  else if (feof(stdin))
	    {
	     printf("exit\n");
	     exit(0);
	    }
	  else
	    {
	      free(words);
	      words = NULL;
	      printf("exit\n");
	      exit(0);
	    }
	}
    }
  else
    {
      wait(NULL);
    }
  free(words);
  words = NULL;
  return (0);
}
