#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, sizename = 0, sizeowner = 0;
	dog_t *dog;
	
	dog = malloc(sizeof(dog_t));
		if (dog == NULL)
		return (NULL);
	while (*(name + i) != '\0')
	{
		i++;
		sizename++;
	}
		dog->name = malloc((sizename + 1) * sizeof(char));
				if (dog->name == NULL)
							{
