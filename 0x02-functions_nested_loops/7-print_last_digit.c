#include "main.h"
/**
 * print_last_digit - Print last digit of a number
 *
 * @n: Type int n and @b type int b
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		x = -1 * (n % 10);
		_putchar(x + '0');
		return (x);
	}
	else
	{
		x = n % 10;
		_putchar(x + '0');
		return (x);
	}
}
