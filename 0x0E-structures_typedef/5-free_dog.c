#include <stdlib.h>
#include "dog.h"
/**
  * free_dog - Frees memory
  * @d: Struct Dog to be freed
  *
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
