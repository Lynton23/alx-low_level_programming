#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes from src to append.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
char *dest_end = dest;
int src_len = 0;
int i;
/* Find the end of dest*/
while (*dest_end != '\0')
dest_end++;

/* Calculate the length of src or stop at n bytes*/
while (src_len < n && src[src_len] != '\0')
src_len++;

/* Append src to dest*/
for (i = 0; i < src_len; i++)
{
dest_end[i] = src[i];
}

/* Null-terminate the resulting string*/
dest_end[src_len] = '\0';

return (dest);
}
