#include "main.h"
#include <unistd.h>
/*
 * _putchar -writes the character c to stdout
 * @c: The charcter to print
 *
 * Return: On success 1
 * On error -1 is retuned and errnois set appropriately
 */

int_putchar(char c)
{
	return(write(1,&c,1));
}
