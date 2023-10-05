#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to print.
 *
 * Return: On success, return the number of characters written.
 * On error, return -1 and set errno appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
