#include "main.h"

/**
 * get_cmd - get the command
 * @line: the command's user
 * @cmd: command
 * Return: Always 0.
 */

char **get_cmd(char **cmd, char *line)
{
char *tok = NULL;
char *delim = " \n\t\r";
int i = 0;
int b;
/* We need to clean cmd on each call */
for (b = 0; cmd[b]; b++)
cmd[b] = NULL;
tok = strtok(line, delim);
do {
tok = strtok(line, delim);
cmd[i] = tok;
line = NULL;
i++;
} while (tok);
if (cmd == NULL)
printf("Error");
free(tok);
return (cmd);
}
