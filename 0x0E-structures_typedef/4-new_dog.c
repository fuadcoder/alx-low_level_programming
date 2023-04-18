#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - it creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Return: struct dog
 * if fails, returns NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, dname, downer;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (dname = 0; name[dname]; dname++)
		;

	for (downer = 0; owner[downer]; downer++)
		;

	p_dog->name = malloc(dname + 1);
	p_dog->owner = malloc(downer + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (i = 0; i < dname; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';

	p_dog->age = age;

	for (i = 0; i < downer; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';

	return (p_dog);
}
