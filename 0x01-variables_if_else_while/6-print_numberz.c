#include <stdio.h>

/**
 * main - prints single-digit numbers of base 10, followed by a newline
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number = 0;

while (number <= 9)
{
putchar(number + '0');
number++;
}

putchar('\n');

return (0);
}

