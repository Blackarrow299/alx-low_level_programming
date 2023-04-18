/**
 * init_dog - init dog
 * @dog: First operand
 * @name: Second operand
 * @age: Second operand
 * @owner:
 * Description: This is a longer description.
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner) {
	d->name = *name;
	d->age = age;
	d->owner = *owner;
}
