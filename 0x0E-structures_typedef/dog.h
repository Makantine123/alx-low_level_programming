#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dogs basic info
 * @name: Dogs name
 * @age: Dogs age
 * @owner: Dog's owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
