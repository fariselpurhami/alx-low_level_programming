#ifndef DOG_H
#define DOG_H

/**
 * struct dog - DEFINE A NEW TYPE STRUCT DOG WITH THE FOLLOWING ELEMENTS
 * @name: THE NAME OF THE DOG
 * @age:  THE AGE OF THE DOG
 * @owner: THE OWNER OF THE DOG
 *
 * Description: The Description of Name and Age and Owner of th Dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
