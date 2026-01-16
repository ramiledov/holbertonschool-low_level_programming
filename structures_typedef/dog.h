#ifndef DOG_H
#define DOG_H

/**
 * struct dog - describes a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
char *name;
float age;
char *owner;
};

/* typedef for struct dog */
typedef struct dog dog_t;

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d);

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - frees a dog structure
 * @d: pointer to the dog to free
 */
void free_dog(dog_t *d);

#endif /* DOG_H */
