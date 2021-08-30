#include <stdio.h>
/**
*main - entry point
*Description: prints the alphabet in
*lowercase, followed by a new line
*Return: 0 on a successful compilation
*/
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
