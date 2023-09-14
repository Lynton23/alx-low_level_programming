#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
long num = 612852475143;
long largest_prime;
long i;

/* divide num by 2 until it is odd */
while (num % 2 == 0)
{
largest_prime = 2;
num /= 2;
}

for (i = 3; i <= sqrt(num); i += 2)
{
while (num % i == 0)
{
largest_prime = i;
num /= i;
}
}

if (num > 2)
largest_prime = num;

printf("%ld\n", largest_prime);

return (0);
}
