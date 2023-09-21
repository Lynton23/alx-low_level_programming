#include "main.h"
#include <stdbool.h>

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: true if it's a separator, otherwise false.
 */
bool is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;

for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
return (true);
}

return (false);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 *
 * Return: A pointer to the modified string `str`.
 */
char *cap_string(char *str)
{
bool new_word = true;
int i = 0;

while (str[i] != '\0')
{
if (is_separator(str[i]))
{
new_word = true;
}
else if (new_word && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 'a' + 'A';
new_word = false;
}
else
{
new_word = false;
}

i++;
}

return (str);
}
