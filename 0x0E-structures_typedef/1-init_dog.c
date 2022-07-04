#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes struct dog
 * @d: struct coppies dog
 * @name: member
 * @age: member
 * @owner: member
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
