#include<stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - check the code
 * @argc: count of the arguments supplied to the program
 * @argv: an array of pointers to the
 * strings which are those arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{int i, mul =0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
mul = mul * atoi(argv[i]);
}
printf("%d\n", mul);
}
else
{
    printf("Error");
}

return (0);
}
