#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int a = 1, b = 2, temp;
int count;

printf("%lu, %lu, ", a, b);

for (count = 2; count < 98; count++)
{
temp = a + b;
a = b;
b = temp;

if (count != 97)
printf("%lu, ", b);
else
printf("%lu\n", b);
}

return (0);
}
