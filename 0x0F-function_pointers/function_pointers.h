#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Function pointer that takes a char pointer */
typedef void (*name_printer_t)(char *);

/* Function prototypes */
void print_name(char *name, name_printer_t printer);
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /* FUNCTION_POINTERS_H */
