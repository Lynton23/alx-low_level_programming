#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array to be processed.
 * @size: The size of the array.
 * @action: A pointer to the function to apply to each element.
 *
 * Description: This function iterates over the elements of the array
 * and applies the provided action function to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
