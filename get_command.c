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
    char *command = NULL;
    int i = 0;
    int b;
    /* We need to clean cmd on each call */
    for (b = 0; cmd[b]; b++)
        cmd[b] = NULL;
    tok = strtok(line, delim);
    while (tok)
    {
        cmd[i] = tok;
        tok = strtok(NULL, delim);
        i++;
    }
    command = getpath(cmd);
    cmd[0] = command == NULL ? strdup(cmd[0]) : command;
    return (cmd);
}
