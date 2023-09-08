#include <stdio.h>

/**
 * main - prints all numbers of base 16 in
 * lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char digit = '0'; /* Initialize 'digit' to '0'*/

while (digit <= '9') /* Loop for digits '0' to '9'*/
{
putchar(digit); /* Print the current digit*/
digit++; /* Move to the next digit*/
}

digit = 'a'; /* Reset 'digit' to 'a'*/

while (digit <= 'f') /* Loop for lowercase letters 'a' to 'f'*/
{
putchar(digit); /* Print the current letter*/
digit++; /* Move to the next letter*/
}
putchar('\n');

return (0);
}

