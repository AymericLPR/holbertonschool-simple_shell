#include "main.h"

/**
 * main - access to simple shell
 * @argc: argc
 * @argv: argv
 * @envp: environement variable
 * Return: Always 0.
 */

int main(__attribute__((unused))int argc, char **argv, char **envp)
{
char *line = NULL;
size_t len = 0;
char **cmd;
(void)argv;

cmd = calloc(sizeof(char), 1024);
while(1)
{
getline(&line, &len, stdin);
if (feof(stdin) || strcmp(line, "exit\n") == 0)
{
break;
}
else if (strcmp(line, "env\n") == 0)
penv(envp);
else if (strcmp(line, "\n") != 0)
{
cmd = get_cmd(cmd, line);
frk(cmd, envp);
}
}
free(cmd);
free(line);
return (0);
}
