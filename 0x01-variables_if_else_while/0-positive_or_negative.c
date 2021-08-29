#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Positive or Negative
*/
int main(void)
{
/**
 * main - positive or negative
 * Description: random numbers
 * variable n has been assigned a random value
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
printf("%d is zero\n"), n;
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
