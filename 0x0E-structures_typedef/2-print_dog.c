#include <stdio.h>
#include "dog.h"
/**
 * struct dog - This is the structure
 * @d: this is the name of structuture
 * Retturn: nothing
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}