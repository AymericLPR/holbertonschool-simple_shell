#include "main.h"
/**
 * Builtin - struct for builtin functions
 * @s: char of format
 * Return: a function
 *
 */
int builtin(char *s)
{
int i = 0;

cmnd_t comms[] = {
{"env", printenv}, 
{"exit", exitshell},
{NULL, NULL}
};

while (comms[i].arg != NULL)
{

if (_strcmp(comms[i].arg, s) == 0
		&& (_strlen(comms[i].arg) == _strlen(s)))
return (comms[i].func());
i++;
}
return (1);
}
