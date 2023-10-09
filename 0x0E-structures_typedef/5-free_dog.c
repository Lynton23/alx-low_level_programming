#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free memory allocated for a dog structure
 * @d: Pointer to the dog structure to free
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
/* Free the dynamically allocated name and owner strings */
free(d->name);
free(d->owner);

/* Free the memory allocated for the dog structure itself */
free(d);
}
}
