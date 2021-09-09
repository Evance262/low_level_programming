#include "holberton.h"
#include <stdio.h>
/**
 * _strncpy- function that copies a string.
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * @n: number of characters from source c-string
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;
if (dest == NULL)
{
return (NULL);
}
while (*src && n--)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (ptr);
}
