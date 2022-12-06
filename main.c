#include "main.h"

/**
 * main - access to simple shell
 * @argc: argc
 * @argv: argv
 * @envp: environement variable
 * Return: Always 0.
 */

int main(__attribute__((unused))int argc, __attribute__((unused))char **argv, char **envp)
{
char *line;
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
frk(cmd, envp);
}
}
free(line);
return (0);
}
