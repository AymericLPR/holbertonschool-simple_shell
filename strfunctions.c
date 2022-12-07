#include "main.h"
/**
 * _strlen - prints the length of the string
 * @s: prints length of the string
 *
 * Return: 1
 */
int  _strlen(char *s)
{
int l = 0;

while (s[l] != '\0')
l++;

return (l);
}

/**
 * *_strdup - returns a pointer to a new string
 * @str: strating char in string
 *
 *  Return: s
 */
char *_strdup(char *str)
{
char *s;
int i;

if (str == NULL)

return (NULL);

s = malloc((_strlen(str) + 1) * sizeof(char));

if (s != NULL)
{
for (i = 0; str[i] != '\0'; i++)
s[i] = str[i];
s[i] = '\0';
}
return (s);
}
/**
 * *str_concat -concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: str
 */
char *str_concat(char *s1, char *s2)
{
char *str;
int i;
int n = 0;
int len1, len2;

if (s1 == NULL)
len1 = 0;

else
len1 = _strlen(s2);
