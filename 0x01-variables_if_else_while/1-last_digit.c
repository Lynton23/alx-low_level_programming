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
int n;

srand(time(0)); /* Seed the random number generator */
n = rand(); /* Generate a random number and store it in n */

printf("Last digit of %d is %d",
n,
abs(n) % 10); /* Print generated number and its last digit */

if (abs(n) % 10 > 5)
printf(" and is greater than 5\n");
else if (abs(n) % 10 == 0)
printf(" and is 0\n");
else
printf(" and is less than 6 and not 0\n");

return (0);
}

