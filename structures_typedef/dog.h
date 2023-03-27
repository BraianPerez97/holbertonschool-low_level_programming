#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - new structure type
 * @name: name of dog
 * @age: dog age
 * @owner: dogs owner
 * description: define new type
 */
struct dog
{
        char *name;
        float age;
        char *owner;
};
/**
 * struct dog - init a variable
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
