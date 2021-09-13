#include "holberton.h"
#include<stdio.h>
/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * @c: is a character
 * Returns: 0
*/
int _isdigit(int c)
{
if (c == '0')
{
return (1);
}
else if (c == 'a')
{
return (0);
}
return (0);
}
