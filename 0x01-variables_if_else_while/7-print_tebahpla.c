#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse, followed by a newline
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/* Declare an integer variable to store the character */
char ch;

/* Initialize the variable to the lowercase letter 'z' */
ch = 'z';

/* Print the lowercase alphabet in reverse */
while (ch >= 'a')
{
putchar(ch);
ch--;
}

/* Print a newline character */
putchar('\n');

/* Return 0 to indicate success */
return (0);
}
