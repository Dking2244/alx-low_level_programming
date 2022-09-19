#include "main.h"

/**
 * _streln - return the length of a given string
 *
 * @s: pointer to string to work on
 * Return: String
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
