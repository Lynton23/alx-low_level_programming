#include <stdio.h>
/**
 * main - prints single-digit numbers of base 10, followed by a newline
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/* Declare an integer variable to store the number */
int i;

/* Initialize the variable to 0 */
i = 0;

/* Print all single digit numbers from 0 to 9 */
for (i = 0; i <= 9; i++)
{
/* Print the number */
putchar(i + '0');
}

/* Print a newline character */
putchar('\n');

/* Return 0 to indicate success */
return (0);
}
