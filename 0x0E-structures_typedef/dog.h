#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type struct dog with the following elements:
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};


/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */

