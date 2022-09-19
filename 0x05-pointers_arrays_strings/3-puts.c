#include "main.h"

/**
 * _puts - print a given sting to screen
 *
 * @str: passed pointer arguement for string
 * Return: void
 */
void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}
