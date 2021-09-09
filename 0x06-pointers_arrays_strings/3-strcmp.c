#include "holberton.h"
#include <stdio.h>
/**
 * _strcmp - function that copies a string.
 *
 * @s1: pointer to destination char
 * @s2: pointer to source char
 * Return: char
 */
int _strcmp(char *s1, char *s2)
{
while (*s1)
{
if (*s1 != *s2)
break;
s1++;
s2++;
}
return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
