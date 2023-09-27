#include "main.h"

int helper(int n, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: integer to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
    if (n < 2)
        return (0);
    return (helper(n, n - 1));
}

/**
 * helper - helper function to check if a number is prime
 * @n: number to check
 * @i: iterator
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int helper(int n, int i)
{
    if (i == 1)
        return (1);
    if (n % i == 0)
        return (0);
    return (helper(n, i - 1));
}
