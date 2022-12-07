#include "main.h"
/**
 * Builtin - struct for builtin functions
 * @s: char of format
 * @args: a null -terminated double pointer containing command/arguments
 * @front: a double pointer to the beginning of args
 *
 * Return: a function
 *
 */
int builtin(char *s)
{
int i = 0;

cmd_t comms[] = {
{"env", printenv},           /*{arg, funct},*/
{"exit", exitshell},
{NULL, NULL}
};

while (comms[i].arg != NULL) /*Loops through struct until NULL*/
{

if (_strcmp(comms[i].arg, s) == 0
		&& (_strlen(comms[i].arg) == _strlen(s)))
return (comms[i].func());
i++;
}
return (1);
}
