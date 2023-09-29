#include "main.h"

/**
 * _strncpy - Copies n characters from one string to another
 * @dest: The destination buffer
 * @src: The source string
 * @n: The number of characters to copy
 *
 * Return: A pointer to the destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
char *dest_start = dest;

while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

while (n > 0)
{
*dest = '\0';
dest++;
n--;
}

return (dest_start);
}
