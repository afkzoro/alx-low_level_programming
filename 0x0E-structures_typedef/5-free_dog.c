#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
	* free_dog - Frees dynamic memory allocated to dog
	*
	* @d: Pointer to the dog struct
	* Return: Void
	*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
