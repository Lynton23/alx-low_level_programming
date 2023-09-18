#include "main.h"

/**
 * _strcpy - Copies a string to a buffer.
 * @dest: A pointer to the destination buffer.
 * @src: A pointer to the source string.
 *
 * Return: A pointer to the destination buffer `dest`.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
/* Add the null terminator at the end of the destination string*/
dest[i] = '\0';

return (dest);
}
