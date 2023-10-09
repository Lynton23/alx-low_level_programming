#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Create a new dog and store a copy of name and owner
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner's name
 * Return: Pointer to the newly created dog structure, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog_ptr;
char *name_copy;
char *owner_copy;

/* Allocate memory for the new dog structure */
new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
return (NULL);

/* Allocate memory and copy the name */
name_copy = strdup(name);
if (name_copy == NULL)
{
free(new_dog_ptr);
return (NULL);
}

/* Allocate memory and copy the owner */
owner_copy = strdup(owner);
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog_ptr);
return (NULL);
}

/* Initialize the new dog structure */
new_dog_ptr->name = name_copy;
new_dog_ptr->age = age;
new_dog_ptr->owner = owner_copy;

return (new_dog_ptr);
}
