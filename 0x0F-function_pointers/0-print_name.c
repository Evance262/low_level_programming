#include <stdio.h>
/**
 * print_name - function that prints a name
 * @name: name of the person
 * @f: parameter pointer to name
*/
void print_name(char *name, void (*f)(char *))
{
(f)(name);
}
