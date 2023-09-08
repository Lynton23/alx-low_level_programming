#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random number and checks if it is positive,
 * negative or zero
 *
 * Return: 0 if successful
 */
int main(void)
{
int n;

srand(time(0)); /* Seed the random number generator with the current time */
n = rand() - RAND_MAX / 2; /* Generate a random number and store it in n */
printf("%d is ", n); /* Print the generated number */
if (n > 0)
printf("positive\n");
else if (n == 0)
printf("zero\n");
else
printf("negative\n");
return (0);
}
