#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - Initialize a variable of type struct dog
  * @d: The Dog variable to be initialized
  * @name: The name of the dog
  * @age: The age of the Dog
  * @owner: The owner of the Dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
