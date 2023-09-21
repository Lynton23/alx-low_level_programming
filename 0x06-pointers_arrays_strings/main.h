#ifndef MAIN_H
#define MAIN_H

#include <stdbool.h>

int _putchar(char c);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *str);
bool is_separator(char c);
char *cap_string(char *str);
char *leet(char *a);
char *rot13(char *a);
void *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_number(int n);
void print_buffer(char *b, int size);


#endif /* MAIN_H */

