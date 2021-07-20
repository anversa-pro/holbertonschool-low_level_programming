#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 * *@d: pointer to a struct dog
 * *@name: pointer to a name to set
 * @age: Dog's age
 * *@owner: Pointer to a owner to set
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
