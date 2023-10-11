#ifndef STRUCT_DOG_H
#define STRUCT_DOG_H
/**
 * struct dog - Define a new type struct dog
 * @name: input of name
 * @age: input of age
 * @owner: input of owner
 * Return: nothing
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

#endif /* STRUCT_DOG_H */
