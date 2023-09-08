
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * then in uppercase, followed by a newline
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/* Declare a variable to store the character */
char ch;

/* Initialize the variable to 'a' */
ch = 'a';

/* Print all the lowercase letters from 'a' to 'z' */
for (ch = 'a'; ch <= 'z'; ch++)
{
/* Print the character */
putchar(ch);
}

/* Print all the uppercase letters from 'A' to 'Z' */
for (ch = 'A'; ch <= 'Z'; ch++)
{
/* Print the character */
putchar(ch);
}

/* Print a newline character */
putchar('\n');

/* Return 0 to indicate success */
return (0);
}
