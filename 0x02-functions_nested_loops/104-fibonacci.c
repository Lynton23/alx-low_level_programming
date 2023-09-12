#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int prev = 1;
long int current = 2;
long int next;
int count;

printf("1, 2");

for (count = 3; count <= 98; count++)
{
next = prev + current;
printf(", %ld", next);
prev = current;
current = next;
}

printf("\n");

return (0);
}
