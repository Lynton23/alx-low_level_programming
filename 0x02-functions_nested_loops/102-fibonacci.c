#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int first = 1, second = 2, next, count;

printf("%ld, %ld", first, second);

for (count = 3; count <= 50; count++)
{
next = first + second;
printf(", %ld", next);

first = second;
second = next;
}

printf("\n");

return (0);
}
