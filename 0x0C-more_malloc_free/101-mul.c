#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
int i, j;
long num1, num2;  /* Declare variables here */

if (argc != 3)
{
printf("Error\n");
return (98);
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (98);
}
}
}

num1 = atol(argv[1]);  /* Assign values here */
num2 = atol(argv[2]);
printf("%ld\n", num1 *num2);

return (0);
}
