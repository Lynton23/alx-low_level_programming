#include <stdio.h>

/**
 * main - prints the lowercase
 * alphabet followed by a newline
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a'; /* Initialize 'letter' with 'a'*/

while (letter <= 'z') /* Loop from 'a' to 'z'*/
{
putchar(letter); /* Print the current letter*/
letter++; /* Move to the next letter*/
}

putchar('\n');

return (0);
}

