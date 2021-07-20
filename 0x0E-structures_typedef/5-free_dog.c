#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees memory space of dog structure
 * *@d: pointer to a structure type dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}
