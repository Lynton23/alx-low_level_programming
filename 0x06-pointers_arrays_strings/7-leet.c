#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
char leet_replace[10] = "aAeEoOtTlL";
char leet_encode[10] = "4433007711";
int i;
int j;
for (i = 0; str[i]; i++)
{
for (j = 0; leet_replace[j]; j++)
{
if (str[i] == leet_replace[j])
{
str[i] = leet_encode[j];
break;
}
}
}

return (str);
}
