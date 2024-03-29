#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - Struct dog
 * @name: name
 * @age: age
 * @owner:  owner
 * Description: This struct is for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 * @d: struct pointer
 * @name: name
 * @age: age
 * @owner:  owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
