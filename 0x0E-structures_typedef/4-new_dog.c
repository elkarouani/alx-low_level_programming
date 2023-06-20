#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner name
 *
 * Return: pointer of the new dog struct or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len = 0, owner_len = 0, i = 0, j = 0;
	
	while (*(name + name_len) != '\0')
		name_len++;
	while (*(owner + owner_len) != '\0')
		owner_len++;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	
	dog->name = malloc(sizeof(char) * (name_len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	while (i < name_len)
	{
		*(dog->name + i) = *(name + i);
		i++;
	}
	while (j < owner_len)
	{
		*(dog->owner + j) = *(owner + j);
		j++;
	}

	*(dog->name + name_len) = '\0';
	*(dog->owner + owner_len) = '\0';
	dog->age = age;
	return (dog);
}
