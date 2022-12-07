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
len1 = _strlen(s1);

if (s2 == NULL)
len2 = 0;

else
len2 = _strlen(s2);

str = malloc((len1 + len2 + 2) * sizeof(char));
if (str == NULL)
return (NULL);

for (i = 0; i < len1; i++)
str[i] = s1[i];
str[i] = '/';
i++;

for (n = 0, n < len2, n++, i++)
str[i] = s2[n];
str[i] = '\0';
free(s1);
return (str);
}
/**
 * _stcmp - compares strings s1 and s2
 * @s1: first string to be compared
 * @s2: second string being compared with the first
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
int i;
int r = 0;

for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{

if (r == 0)
r = s1[i] - s2[i];

else
break;
}
return (r);
}
