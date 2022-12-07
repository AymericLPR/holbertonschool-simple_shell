#include "main.h"

/**
 * frk - function fork
 * @cmd: command
 * @envp: environement variable
 */

void frk(char **cmd, char **envp)
{
int status = 0;
pid_t pid; 

pid = fork();

if (pid == 0)
{
if (execve(cmd[0], cmd, envp) == -1)
free(cmd);
exit(0);
}
else
wait(&status);
if (WIFEXITED(status))
return (WEXITSTATUS(status));
else
return (status);
}
