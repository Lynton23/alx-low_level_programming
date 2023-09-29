#include "main.h"

/**
 * _strcpy - Copies a string
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: A pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;

while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (dest_start);
}
