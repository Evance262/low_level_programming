#include<stdio.h>
#include "holberton.h"
/**
 * main - check the code
 * @argc: count of the arguments supplied to the program
 * @argv: an array of pointers to the
 * strings which are those arguments
 *
 * Return: Always 0.
 */
int main()
{
int num1,num2,product;
if ((product = num1 * num2))
{
printf("%d",product);
}
else
{
printf("Error");
}
return (0);
}
