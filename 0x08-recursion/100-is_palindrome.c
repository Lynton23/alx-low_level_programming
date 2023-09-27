#include "main.h"

int helper(char *s, int start, int end);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int length = _strlen_recursion(s);
return (helper(s, 0, length - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to check
 *
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
 * helper - helper function to check if a string is a palindrome
 * @s: string to check
 * @start: start index
 * @end: end index
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int helper(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (helper(s, start + 1, end - 1));
}
