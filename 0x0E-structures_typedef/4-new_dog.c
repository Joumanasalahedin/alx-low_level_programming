#include "dog.h"
#include <stdlib.h>

/**
  * _strcpy - copies the string pointed to by src to buffer
  * @dest: buffer pointed to
  * @src: string pointed to
  * Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

/**
  * new_dog - creates a new dog
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  * Return: new dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *dog_name, *dog_owner;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (new_dog);

	dog_name = malloc(sizeof(name));

	if (dog_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	dog_owner = malloc(sizeof(owner));

	if (dog_owner == NULL)
	{
		free(dog_name);
		free(new_dog);
		return (NULL);
	}

	_strcpy(dog_name, name);
	_strcpy(dog_owner, owner);

	new_dog->name = dog_name;
	new_dog->age = age;
	new_dog->owner = dog_owner;

	return (new_dog);
}
