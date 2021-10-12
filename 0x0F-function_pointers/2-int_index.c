#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name of the person
 * @f: input pointer function and execute it
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int));