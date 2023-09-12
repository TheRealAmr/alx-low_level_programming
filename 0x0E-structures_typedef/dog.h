#ifndef THE_DOG
#define THE_DOG

/**
 * struct dog - the dog struct
 * @name:  dog name
 * @age: dog age
 * @owner: and the owner
 *
 * Description: typing this bc it triggers the longer description
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
