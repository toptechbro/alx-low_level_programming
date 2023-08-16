#include <stdlib.h>
#include "dog.h"
/**
  * free_dog - Frees Dog
  * @d: The Dog to be freed
  *
  *Return: Always 0
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return (0);

	free(d->owner);
	free(d->name);
	free(d);
}
