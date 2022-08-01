#include <stdio.h>
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
 int i, j, len1, len2;
 dog_t *cute_dog;

 len1 = len2 = i = j = 0;

 while (name[len1++] != '\0');
 while (owner[len2++] != '\0');

 cute_dog = malloc(sizeof(dog_t));
 if (cute_dog == NULL)
 return (NULL);

 cute_dog->name = malloc(sizeof(cute_dog->name) * len1);
 if (cute_dog == NULL)
 return (NULL);

 while (i < len1)
 {
  cute_dog->name[i] = name[i];
  i++;
 }
 cute_dog->age = age;

 cute_dog->owner = malloc(sizeof(cute_dog->owner) * len2);
 if (cute_dog == NULL)
 return (NULL);
 while (j < len2)
 {
  cute_dog->owner[j] = owner[j];
  j++;
 }

 return (cute_dog);
}
