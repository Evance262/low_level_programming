#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int n = 98;
int *ip;
ip = &n;
printf("n=%d\n", *ip);
return (0);
}
