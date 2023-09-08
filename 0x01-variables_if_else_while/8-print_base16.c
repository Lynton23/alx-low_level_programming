#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase, followed by a newline
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char digit; /* Declare a variable to hold the hexadecimal digit*/

while (digit <= '9') /* Loop for digits '0' to '9'*/
{
putchar(digit); /* Print the current digit*/
digit++; /* Move to the next digit*/
}

digit = 'a'; /* Reset 'digit' to 'a',
	       *
	       * the first lowercase letter in hexadecimal
	       */

while (digit <= 'f') /* Loop for lowercase letters 'a' to 'f'*/
{
putchar(digit); /* Print the current letter*/
digit++; /* Move to the next letter*/
}

putchar('\n'); /* Print a newline character to complete the output*/

return (0);
}

