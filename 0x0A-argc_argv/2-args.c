#include <stdio.h>
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
{int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
