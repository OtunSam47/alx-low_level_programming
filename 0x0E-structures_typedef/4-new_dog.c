#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - ...
  * @name: ...
  * @age: ...
  * @owner: ...
  *
  * Return: ...
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *kiwi_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		kiwi_dog = malloc(sizeof(dog_t));

		if (kiwi_dog == NULL)
			return (NULL);

		kiwi_dog->name = malloc(sizeof(char) * name_l);

		if (kiwi_dog->name == NULL)
		{
			free(kiwi_dog);
			return (NULL);
		}

		kiwi_dog->owner = malloc(sizeof(char) * own_l);

		if (kiwi_dog->owner == NULL)
		{
			free(kiwi_dog->name);
			free(kiwi_dog);
			return (NULL);
		}

		kiwi_dog->name = _strcpy(kiwi_dog->name, name);
		kiwi_dog->owner = _strcpy(kiwi_dog->owner, owner);
		kiwi_dog->age = age;
	}

	return (kiwi_dog);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}

	return (i);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	dest[j++] = '\0';

	return (dest);
}
