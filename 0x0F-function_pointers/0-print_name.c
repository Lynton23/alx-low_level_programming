#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a given printing function.
 * @name: The name to be printed.
 * @printer: A function pointer to the printing function.
 *
 * Description: This function takes a name and a function pointer to a printing
 * function. It uses the provided printing function to display the name in a
 * specific way.
 */

/* Define the print_name function */
void print_name(char *name, name_printer_t printer)
{
/* Implementation of the print_name function */
printer(name);
}
