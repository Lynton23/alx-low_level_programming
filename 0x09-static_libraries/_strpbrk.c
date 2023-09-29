#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: The string to be searched
 * @accept: The string containing characters to search for
 *
 * Return: A pointer to the first occurrence of any character in accept in s, or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
if (_strchr(accept, *s) != NULL)
return (s);
s++;
}

return (NULL);
}
