#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Prints attributes of `d` dog. Prints "(nil)" if attribute has no value
 * @d: Pointer to instance of struct dog
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	
	else
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
