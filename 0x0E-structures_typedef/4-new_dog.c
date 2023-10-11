#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: string of neme
 * @age: float of age
 * @owner: string of owner
 * Return: pointer p
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(p);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(p);
		free(name);
		return (NULL);
	}
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
