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
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
