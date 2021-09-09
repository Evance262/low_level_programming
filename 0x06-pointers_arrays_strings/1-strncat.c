#include <stdio.h>
#include <string.h>
/**
* _strncat - a function that concatenates two strings
* @dest: A pointer to the string to be concatenated upon.
* @src: The source string to be appended to @dest.
*
* Return: A pointer to the destination string @dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
char *p;
for (i = 0; i < n; i++)
{
    //src++;
}
for (j = 0; dest[j] != '\0'; j++)
{

}
dest[j] = dest[j] + src[n-1];

//dest = \0
return (dest);
}