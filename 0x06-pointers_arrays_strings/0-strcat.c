#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
* strcat - a function that concatenates two strings
* @dest: A pointer to the string to be concatenated upon.
* @src: The source string to be appended to @dest.
*
* Return: A pointer to the destination string @dest.
*/
char *_strcat(char *dest, char *src)
{
unsigned int i = 0;
unsigned int j = 0;
while (*(dest + i) != '\0')
i++;
while (*(src + j) != '\0')
{
*(dest + i) = *(src + j);
i++;
j++;
}
return (dest);
}
