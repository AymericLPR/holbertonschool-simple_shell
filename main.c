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
char *line;
size_t len = 0;
char **cmd;
(void)argv;

line = (char *)malloc(len * sizeof(char));
while (1)
{
getline(&line, &len, stdin);
if (feof(stdin) || strcmp(line, "exit\n") == 0)
{
exit(0);
}
else if (strcmp(line, "env\n") == 0)
penv(envp);
else
{
cmd = get_cmd(line);
frk(cmd, envp);
}
}
free(line);
return (0);
}
