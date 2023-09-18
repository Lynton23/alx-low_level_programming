#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
/* Initialize the sign to positive*/
int sign = 1;
int result = 0;
int digit;

while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
{

/* Convert character to integer*/
digit = *s - '0';

/* Check for potential overflow*/
if ((sign == 1 && (result > INT_MAX / 10)) ||
(sign == 1 && (result == INT_MAX / 10 && digit > 7)) ||
(sign == -1 && (result < INT_MIN / 10)) ||
(sign == -1 && (result == INT_MIN / 10 && digit > 8)))
{
return ((sign == 1) ? INT_MAX : INT_MIN);
}

result = result * 10 + digit;
}

/* If non-digit character after the number, break*/
else if (result != 0)
break;
s++;
}

return (result *sign);
}
