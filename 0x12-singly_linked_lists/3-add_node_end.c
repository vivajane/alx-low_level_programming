#include "lists.h"
#include <stdlib.h>

/**
 * _strlen - return the lenggth from a string
 *  @s: pointer to first character of a string
 *
 *  Return: number of characters in a string
 */

unsigned int _strlen(const char *s)
{
unsigned int len = 0;
while (*s)
{
len++;
s++;
}
return (len);
}

/**
 * _strdup - Returns a pointer to a copy of the string given as a parameter
 * @str: String given as a parameter
 *
 * Return: Pointer to a copy of str
 */

char *_strdup(const char *str)
{
unsigned int i, leng;
char *s;
if (str == NULL)
{
return (NULL);
}
else
{
leng = _strlen(str);
s = (char *)malloc((leng + 1) * sizeof(char));
if (s == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < (leng + 1); i++)
{
s[i] = str[i];
}
return (s);
}
}
}
