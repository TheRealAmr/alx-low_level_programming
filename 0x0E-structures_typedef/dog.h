#ifndef THE_DOG
#define THE_DOG

/**
 * struct dog - info about dog
 * @name:  the name
 * @age: their age
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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
