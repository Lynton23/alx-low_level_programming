#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a[5];
int *p;

a[2] = 1024;
p = &a[2];
*((int *)((char *)p + sizeof(int))) = 98; /* Add this line */
printf("a[2] = %d\n", a[2]);
return (0);
}
