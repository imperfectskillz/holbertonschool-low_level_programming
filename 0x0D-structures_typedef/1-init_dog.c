#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - initiliazes dog info
 *@d: pointer to the struct dog
 *@name: name
 *@age: age
 *@owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
