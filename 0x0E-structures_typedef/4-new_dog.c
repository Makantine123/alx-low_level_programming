#include "dog.h"
#include <stdlib.h>

/**
 * _stringlen - Finds the length of a string
 * @s: string to evaluate
 *
 * Return: The lenth of the string
 */
int _stringlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
 * new_dog - Creates a new dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Return: New dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2, i;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	l1 = _stringlen(name);
	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	l2 = _stringlen(owner);
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		free(dog->owner);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
	{
		dog->name[i] = name[i];
	}
	dog->name[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
	{
		dog->owner[i] = owner[i];
	}
	dog->owner[i] = '\0';
	dog->age = age;
	return (dog);

}
