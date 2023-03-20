#include "dog.h"
#include <stdio.h>

/**
 * new_dog - new elements
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dog;
	int i, _name, _owner;

	_dog = malloc(sizeof(*_dog));
	if (_dog == NULL || (!name) || !(owner))
	{
		free(_dog);
		return (NULL);
	}

	for (_name = 0; name[_name]; _name++)
		;

	for (_owner = 0; owner[_owner]; _owner++)
		;

	_dog->name = malloc(_name + 1);
	_dog->owner = malloc(_owner + 1);

	if (!(_dog->name) || !(_dog->owner))
	{
		free(_dog->owner);
		free(_dog->name);
		free(_dog);
		return (NULL);
	}

	for (i = 0; i < _name; i++)
		_dog->name[i] = name[i];
	_dog->name[i] = '\0';

	_dog->age = age;

	for (i = 0; i < _owner; i++)
		_dog->owner[i] = owner[i];
	_dog->owner[i] = '\0';

	return (_dog);
}
