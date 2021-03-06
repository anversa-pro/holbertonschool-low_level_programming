#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *new_dog - Creates a new dog copying input values
 * *@name: Pointer to a Dog's name to copy
 * @age: Dog's age to copy
 * *@owner: Pointer to a Dog's owner name to copy
 * Return: pointer to a new dog structure or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_l = 0, owner_l = 0, i = 0;
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	for (name_l = 0; name[name_l]; name_l++)
		continue;
	for (owner_l = 0; owner[owner_l]; owner_l++)
		continue;
	ndog->name = malloc(name_l * sizeof(ndog->name));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i <= name_l; i++)
		ndog->name[i] = name[i];
	ndog->age = age;
	ndog->owner = malloc(owner_l * sizeof(ndog->owner));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (i = 0; i <= owner_l; i++)
		ndog->owner[i] = owner[i];
	return (ndog);
}
