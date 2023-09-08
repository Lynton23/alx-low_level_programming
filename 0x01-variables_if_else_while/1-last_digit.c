#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random number and prints its last digit
 *
 * Return: 0 if successful
 */
int main(void)
{
int n, last_digit;

srand(time(0)); /* Seed the random number generator */
n = rand(); /* Generate a random number and store it in n */
last_digit = n % 10;

if (n < 0)
{
last_digit = -last_digit;
if (last_digit == 0)
{
printf("Last digit of %d is %d and is 0\n",
n,
last_digit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n",
n,
last_digit);
}
}
else
{
if (last_digit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n",
n,
last_digit);
}
else
{
printf("Last digit of %d is %d\n",
n,
last_digit);
}
}

return (0);
}
