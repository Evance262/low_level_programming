#include <stdio.h>
/**
*main - entry point
*Description: prints the alphabet in
*lowercase, followed by a new line
*Return: 0 on a successful compilation
*/
int main(void)
{
char c;
for (c = 'A'; c <= 'Z'; c++)
{
putchar(tolower(c));
}
putchar('\n');
return (0);
}
