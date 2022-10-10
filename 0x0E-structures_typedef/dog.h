#ifndef DOG_H
#define DOG_H
int _putchar(char c);
/**
 * struct dog - best friend of humankind
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* !DOG_H */
