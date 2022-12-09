#include "main.h"

/**
 * ppath - excute cmd
 * @av: array of string pointers containing command line arguments
 * @ev: environment
 * Return: Always 0.
 */

int ppath(char *av[], char *ev[])
{
	const char *path = "/bin/";
	char *cmd;
	pid_t pid;
	int error = 0;
	int have_path = !strstr(av[0], "./") && !strstr(av[0], "/bin/");

	if (!av[0])
		return (-3);

	if (have_path)
	{
			cmd = strdup(path);
			strcat(cmd, av[0]);
			av[0] = strdup(cmd);
			free(cmd);
	}
}
