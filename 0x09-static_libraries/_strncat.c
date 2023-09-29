#include "main.h"

/**
 * _strncat - Concatenates n characters from one string to another
 * @dest: The destination string
 * @src: The source string
 * @n: The number of characters to concatenate
 *
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
char *dest_start = dest;

while (*dest)
{
dest++;
}

while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

*dest = '\0';

return (dest_start);
}
