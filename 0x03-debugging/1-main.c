#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/
int main(void)
{
int i;
printf("Infinite loop incoming :(\n");

i = 0;
/**
 * Commented out code - This was causing an infinite loop
** while (i < 10)
*{
* putchar(i);
*}
*/

/* Prints a message indicating that the infinite loop has been avoided */
printf("Infinite loop avoided! \\o/\n");
return (0);
}
