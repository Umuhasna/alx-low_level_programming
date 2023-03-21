#include "dog.h"

/**
 * _strcpy - copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: the buffer to copy to
 * @src: the string to copy
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: pointer to name
 * @age: age
 * @owner: pointer to owner
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->name = malloc(sizeof(ptr->name));
	if (ptr->name == NULL)
		free(ptr->name);

	ptr->owner = malloc(sizeof(ptr->owner));
	if (ptr->owner == NULL)
		free(ptr->owner);

	_strcpy(ptr->name, name);
	ptr->age = age;
	_strcpy(ptr->owner, owner);

	return (ptr);
}
