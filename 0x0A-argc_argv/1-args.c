#include <stdio.h>
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
{
int counter;
for (counter = 0; counter < argc; counter++)
printf("%2d\n", counter, argv[counter]);
printf("\n");

return (0);
}
