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
