#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
char *s = str;

while (*s)
{
char is_alpha_lower = (*s >= 'a' && *s <= 'z');
char is_alpha_upper = (*s >= 'A' && *s <= 'Z');

if (is_alpha_lower || is_alpha_upper)
{
char map_index = is_alpha_lower ? 'a' : 'A';
*s = ((*s - map_index + 13) % 26) + map_index;
}

s++;
}

return (str);
}
