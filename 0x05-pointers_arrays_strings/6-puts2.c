#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: A pointer to a string.
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
/* Move to the next character (every other character)*/
i += 2;
}

_putchar('\n');
}
