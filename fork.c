#include "main.h"

/**
 * frk - function fork
 * @cmd: command
 * @envp: environement variable
 * @filename: shell
 */

void frk(char **cmd, char **envp, char *filename)
{
pid_t pid;

pid = fork();

if (pid == 0)
{
if (execve(cmd[0], cmd, envp) == -1)
perror("Code nonexistent");
exit(0);
}
else
wait(NULL);
}
