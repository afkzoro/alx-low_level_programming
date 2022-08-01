#include <stdio.h>
#include "dog.h"

/**
	* init_dog - Initializes a dog structure
	* @d: The dog structure
	* @name: The dog's name
	* @age: The dog's age
	* @owner: The dog's owner
	* Return: Void
	*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
