#include <stdio.h>
#include <string.h>
/**
 * _strncat- function that concatenates two strings.
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * @n: n bytes from src
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest + strlen(dest);
while (*src != '\0' && n--)
{
*ptr++ = *src++;
}
return (dest);
}
