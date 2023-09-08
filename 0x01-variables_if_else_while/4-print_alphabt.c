#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * excluding 'e' and 'q', followed by a newline
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/* Declare a variable to store the character */
char ch;

/* Initialize the variable to 'a' */
ch = 'a';

/* Print all the lowercase letters from 'a' to 'z', except for 'q' and 'e' */
for (ch = 'a'; ch <= 'z'; ch++)
{
/* Check if the character is equal to 'q' or 'e' */
if (ch != 'q' && ch != 'e')
{
/* Print the character */
putchar(ch);
}
}

/* Print a newline character */
putchar('\n');

/* Return 0 to indicate success */
return (0);
}
