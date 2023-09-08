#include <stdio.h>

/**
 * main - prints all possible
 * combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number = 0; /* Initialize 'number' to 0*/

while (number <= 9) /* Loop for numbers from 0 to 9*/
{
putchar(number + '0');

if (number < 9)
{
putchar(','); /* Print comma*/
putchar(' '); /*Print space*/
}
number++; /* Move to the next number*/
}

putchar('\n'); /* Print a newline character
		 * to complete the output
*/
return (0);
}

