#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints opcodes of a memory region.
 * @start: The start address of the memory region.
 * @num_bytes: The number of bytes to print.
 */
void print_opcodes(char *start, int num_bytes)
{
int i;
for (i = 0; i < num_bytes; i++)
{
printf("%02x", start[i] & 0xff);
if (i < num_bytes - 1)
{
printf(" ");
}
}
printf("\n");
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 for success,
 * 1 for incorrect number of arguments, 2 for negative bytes.
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
int num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}
char *start = (char *)main;
print_opcodes(start, num_bytes);

return (0);
}
