#include "main.h"

/**
 * get_cmd - get the command
 * @line: the command's user
 * Return: Always 0.
 */

char **get_cmd(char **cmd, char *line)
{
	char *tok = NULL;
	char delim[] = " \n\t";
	int i = 0;

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
