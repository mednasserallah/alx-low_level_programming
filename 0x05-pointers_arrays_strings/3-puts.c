#include "main.h"
#include <stdio.h>

/**
 * _puts - Print a string, followed by a new line, to stdout.
 * @str: Type char pointer
 * Return: Always 0.
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
