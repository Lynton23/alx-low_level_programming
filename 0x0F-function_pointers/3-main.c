#include "3-calc.h"

/**
 * main - Entry point of the program.
 * @argc: The number of arguments.
 * @argv: An array of argument strings.
 *
 * Return: 0 for success,
 *98 for incorrect number of arguments
 *99 for invalid operator, 100 for division by zero.
 */
int main(int argc, char *argv[])
{
int a, b, result;
int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
return (98);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
op_func = get_op_func(argv[2]);
if (!op_func)
{
printf("Error\n");
return (99);
}

result = op_func(a, b);
printf("%d\n", result);
return (0);
}
