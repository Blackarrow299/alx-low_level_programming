#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Poppy
 * @name: string
 * @age: float
 * @owner: string
 *
 * Description: Poppy
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 *dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

#endif
