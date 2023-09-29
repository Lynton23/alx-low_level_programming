#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (unused)
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
(void)argc;
print_program_name(argv);
return (0);
}

/**
 * print_program_name - Prints the program name followed by a new line
 * @argv: An array of strings containing the command-line arguments
 */
void print_program_name(char *argv[])
{
int i = 0;

while (argv[0][i] != '\0')
{
_putchar(argv[0][i]);
i++;
}
_putchar('\n');
}

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to write
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
return write(1, &c, 1);
}
