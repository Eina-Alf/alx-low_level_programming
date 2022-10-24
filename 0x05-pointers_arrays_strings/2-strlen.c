#include "main.h"

/**
 * _strlen - this function change the initial.
 * @s: this is a parameter to change.
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
