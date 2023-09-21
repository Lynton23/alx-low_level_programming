#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
int i, j;

if (size <= 0)
{
printf("\n");
return;
}
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = 0; j < 10; j++)
{
if (j % 2 == 0 && j != 0)
printf(" ");
if (j + i > size - 1)
printf("  ");
else
printf("%02x", *(b + i + j));
}
printf(" ");
for (j = 0; j < 10; j++)
{
if (j + i > size - 1)
break;
if (*(b + i + j) >= ' ' && *(b + i + j) <= '~')
printf("%c", *(b + i + j));
else
printf(".");
}
printf("\n");
}
}
