#include "main.h"

/**
 * penv - print the env
 * @envp: environnement variable
 */

void penv(char **envp)
{
int i = 0;

for (; envp[i] != NULL ; i++)
printf("%s\n", envp[i]);
}
