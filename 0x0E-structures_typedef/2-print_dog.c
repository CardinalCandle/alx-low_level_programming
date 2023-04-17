#include "dog.h"
/**
* print_dog - do thing
* @d: struct
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	((*d).name == NULL) ? printf("nil\n") : printf("Name: %s\n", d->name);
	((*d).age < 0) ? printf("nil\n") : printf("Age: %f\n", d->age);
	((*d).owner == NULL) ? printf("nil\n") : printf("Owner: %s\n", d->owner);
}
