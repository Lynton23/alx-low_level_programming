#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing characters to be accepted.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found = 0;

while (*s)
{
found = 0;/* Reset found flag for each character in s*/
while (*accept)
{
if (*s == *accept)
{
found = 1;/* Character in s is found in accept*/
break;
}
accept++;
}

if (!found)
break;

count++;
s++;
accept = accept - count;/* Reset accept pointer to the start*/
}

return (count);
}
