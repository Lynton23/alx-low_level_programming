#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
/* Password length: 11 characters + null terminator*/
char password[12];
int i, sum, rand_num;

srand(time(0));

sum = 0;
for (i = 0; i < 11; i++)
{
/* Generate a random number between 0 and 61*/
rand_num = rand() % 62;

if (rand_num < 10)

/* Digits '0' to '9'*/
password[i] = '0' + rand_num;
else if (rand_num < 36)

/* Lowercase letters 'a' to 'z'*/
password[i] = 'a' + (rand_num - 10);
else
/* Uppercase letters 'A' to 'Z'*/
password[i] = 'A' + (rand_num - 36);

sum += password[i];
}

/* Null-terminate the string*/
password[11] = '\0';

/* Ensure the sum of ASCII values is equal to 2772 (as per 101-crackme)*/
password[10] = (2772 - sum) % 62;

printf("%s\n", password);

return (0);
}
