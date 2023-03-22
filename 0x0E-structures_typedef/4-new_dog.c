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
	int lname, lowner;
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (lname = 0; name[lname] != '\0'; lname++)
		;

	ptr->name = malloc(sizeof(char) * (lname + 1));
	if (ptr->name == NULL)
		free(ptr->name);

	for (lowner = 0; owner[lowner] != '\0'; lowner++)
		;

	ptr->owner = malloc(sizeof(char) * (lowner + 1));
	if (ptr->owner == NULL)
		free(ptr->owner);

	ptr->name = _strcpy(ptr->name, name);
	ptr->age = age;
	ptr->owner = _strcpy(ptr->owner, owner);

	return (ptr);
}
