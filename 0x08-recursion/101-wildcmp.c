#include "main.h"

int helper(char *s1, char *s2, int i, int j);

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
return (helper(s1, s2, 0, 0));
}

/**
 * helper - helper function to compare two strings
 * @s1: first string
 * @s2: second string
 * @i: index for s1
 * @j: index for s2
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int helper(char *s1, char *s2, int i, int j)
{
if (s1[i] == '\0' && s2[j] == '\0')
return (1);
if (s1[i] == '\0' && s2[j] == '*')
return (helper(s1, s2, i, j + 1));
if (s1[i] == '\0' || s2[j] == '\0')
return (0);
if (s2[j] == '*')
return (helper(s1, s2, i + 1, j) || helper(s1, s2, i, j + 1));
if (s1[i] != s2[j])
return (0);
return (helper(s1, s2, i + 1, j + 1));
}
