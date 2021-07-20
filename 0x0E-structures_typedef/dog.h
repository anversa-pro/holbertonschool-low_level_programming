#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new struct dog
 * *@name: Pointer to Dog's name
 * @age: Dog's age
 * *@owner: Pointer to Dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Initialize a variable of type struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Prints a struct dog */
void print_dog(struct dog *d);

/* Define a new type dog_t as a new name for the type struct dog */
typedef struct dog dog_t;

/* Creates a new dog */
dog_t *new_dog(char *name, float age, char *owner);

/* Frees dogs */
void free_dog(dog_t *d);

#endif /* DOG_H */
