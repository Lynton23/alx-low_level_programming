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
i++;

/* Check if the next character is the end of the string*/
if (str[i] == '\0')
break;

/*Skip the next character*/
i++;
}
/* Print a new line after the characters are printed*/
_putchar('\n');
}
