#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - releases memory held by a structure dog
 * @d: frees struct dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
