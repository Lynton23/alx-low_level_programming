#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *s)
{
int i, j;
char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (s[i] == a[j])
{
s[i] = r[j];
break;
}
}
}
return (s);
}
