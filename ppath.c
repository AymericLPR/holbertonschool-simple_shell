#include "main.h"

/**
 * getpath - function
 * @bufCommand: the input
 * Return: the path of a function
 */

char *getpath(char **bufCommand)
{
char *path = NULL;
char *token = NULL;
char *env = NULL;
struct stat st;

path = calloc(sizeof(char), 1024);
if (path == NULL)
exit(0);
env = strdup(getenv("PATH"));
if (env == NULL)
return (*bufCommand);
token = strtok(env, ":");
while (token)
{
strcpy(path, token);
strcat(path, "/");
strcat(path, bufCommand[0]);
if (stat(path, &st) == 0)
{
free(env);
bufCommand[0] = path;
return (path);
}
token = strtok(NULL, ":");
}
free(path);
free(env);
return (NULL);
}
