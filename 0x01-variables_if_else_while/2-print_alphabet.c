#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - entry point
*Description: prints the alphabet in
*lowercase, followed by a new line
*Return: 0 on a successful compilation
*/
int main(void)
{
char ch;
for(ch='a'; ch<='z'; ch++)
{
putchar(ch);
}
return (0);
}
