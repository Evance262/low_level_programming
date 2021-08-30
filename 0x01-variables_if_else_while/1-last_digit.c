#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - entry point
*Description: assign a random number to the variable n
*Return: 0 on a successful compilation
*/
int main(void)
{
int n, lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
if (lastDigit > 5)
{
printf("Last digit of %d is greater than 5\n", lastDigit);
}
else if (lastDigit == 0)
{
printf("Last digit of %d is 0\n", lastDigit);
}
else
{
printf("Last digit of %d and is less than 6 and not 0\n", lastDigit);
}
return (0);
}
