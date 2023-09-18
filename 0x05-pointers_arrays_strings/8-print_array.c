#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: A pointer to an array of integers.
 * @n: The number of elements to print.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);

/* Check if it's not the last element*/
if (i < n - 1)
printf(", ");
}

/* Print a new line after the elements are printed*/
printf("\n");
}
