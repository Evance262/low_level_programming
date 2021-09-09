#include "holberton.h"
#include <stdio.h>
/**
 * _strcat- function that copies a string.
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
if (dest == NULL)
{
return NULL;
}
char *ptr = dest;
while (*src && n--)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return ptr;
}
