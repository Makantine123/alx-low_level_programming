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

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _stringlen(char *s);


#endif
