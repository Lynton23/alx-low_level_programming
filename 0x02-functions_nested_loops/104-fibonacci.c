#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int count;
unsigned long int prev = 1;
unsigned long int current = 2;
unsigned long int next;

printf("%lu, %lu", prev, current);

for (count = 3; count <= 98; count++)
{
next = prev + current;
printf(", %lu", next);
prev = current;
current = next;
}

printf("\n");

return (0);
}
