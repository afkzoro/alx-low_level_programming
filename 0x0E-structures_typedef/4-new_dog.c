#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
	* new_dog - Creates a new struct of type dog
	*
	* @name: Struct name
	* @age: Struct age
	* @owner: Struct owner
	* Return: Returns pointer to new dog
	*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len1, len2;
	dog_t *cute_dog;

	len1 = len2 = 0;

	while (name[len1++])
	;
	while (owner[len2++])
	;

	cute_dog = malloc(sizeof(dog_t));
	if (cute_dog == NULL)
	return (NULL);

	cute_dog->name = malloc(sizeof(cute_dog->name) * len1);
	if (cute_dog == NULL)
	return (NULL);

	i = 0;

	while (i < len1)
	{
		cute_dog->name[i] = name[i];
		i++;
	}
	cute_dog->age = age;

	cute_dog->owner = malloc(sizeof(cute_dog->owner) * len2);
	if (cute_dog == NULL)
	return (NULL);

	i = 0;

	while (i < len2)
	{
		cute_dog->owner[i] = owner[i];
		i++;
	}

	return (cute_dog);
}
