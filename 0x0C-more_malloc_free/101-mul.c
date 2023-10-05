#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a string consists of only digits.
 * @str: The string to check.
 *
 * Return: 1 if the string consists of only digits, 0 otherwise.
 */
int is_digit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
unsigned long num1, num2, result;

if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");
return (98);
}

num1 = strtoul(argv[1], NULL, 10);
num2 = strtoul(argv[2], NULL, 10);
result = num1 *num2;

printf("%lu\n", result);

return (0);
}
