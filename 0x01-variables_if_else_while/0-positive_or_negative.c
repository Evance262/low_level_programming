#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - positive or negative: Prints a random
*@void: Empty parameter list for main
* number to the variable n each time it is executed
* Description: random numbers,
* The variable n will store a different
* value every time you will run this program
* variable n has been assigned a random value
* return: 0 for success
*/
int main(void)
{
/**
* Description
* Variable n has been assign
* a random number
* return: 0
*/

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
