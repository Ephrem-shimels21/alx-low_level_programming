/**
 * struct dog - define some names
 * @name: pointer
 * @age: float 
 * @owner:pointer 
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
