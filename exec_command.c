#include "main.h"

/**
 * execute_cmd - function that find a file with the command to execute
 * @cmd: command to execute
 * @envp: global environment variables
 * Return: Always 0.
 */

void execute_cmd(char **cmd, char **envp)
{
if ((execve(cmd[0], cmd, envp)) == -1)
perror("Code nonexistent");
}
