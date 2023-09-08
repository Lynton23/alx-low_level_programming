#include <stdio.h>

/**
 * main - prints all possible
 * different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;

for (i = 0; i < 8; i++) /* Loop for the first digit (0 to 7)*/
{
for (j = i + 1; j < 9; j++) /* Loop for the second digit (i+1 to 8)*/
{
for (k = j + 1; k < 10; k++) /* Loop for the third digit (j+1 to 9)*/
{
putchar(i + '0'); /* Print the first digit*/
putchar(j + '0'); /* Print the second digit*/
putchar(k + '0'); /* Print the third digit*/

if (!(i == 7 && j == 8 && k == 9)) /* If not the last combination*/
{
putchar(','); /* Print comma*/
putchar(' '); /* Print space*/
}
}
}
}

putchar('\n'); /* Print a newline character to complete the output*/

return (0);
}

