#include "main.h"

/**
 * frk - function fork
 * @cmd: command
 * @envp: environement variable
 */

void frk(char **cmd, char **envp)
{
pid_t pid;

pid = fork();

if (pid == 0)
{
if (execve(cmd[0], cmd, envp) == -1)
free(cmd);
exit(0);
}
else
wait(NULL);
}
