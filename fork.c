#include "main.h"

/**
 * frk - function fork
 * @cmd: command
 * @envp: environement variable
 *Return: Always 0.
 */

void frk(char **cmd, char **envp)
{
  pid_t pid;

  pid = fork();

  if (pid == 0)
  {
    if (execve(cmd[0], cmd, envp) == -1)
    {
      exit(0);
    }
  }
  else
    wait(NULL);
}
