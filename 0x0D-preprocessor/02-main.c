#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the name of the source file
 * it was compiled from, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/* Use the __FILE__ macro to get the name of the source file */
printf("%s\n", __FILE__);
return (0);
}
