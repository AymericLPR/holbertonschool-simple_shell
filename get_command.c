#include "main.h"

/**
 * get_cmd - get the command
 * Return: Always 0.
 */

char **get_cmd(char *line)
{
	char *tok;
	char delim[] = " \n\t";
	char **cmd;
	int i = 0;

	cmd = malloc(sizeof(char *) * 1024);
	tok = strtok(line, delim);

	while (tok)
	{
		cmd[i] = tok;
		tok = strtok(NULL, line);
		i++;
	}
	if (cmd == NULL)
	  printf("Error");
	return (cmd);
}
