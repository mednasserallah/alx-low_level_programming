#include "main.h"
/**
 * times_table - Print the 9 times table, starting with 0
 * Return: 0
 */
void times_table(void)
{
	int row = 0;
	int column;
	int table;

	while (row < 10)
	{
		column = 0;
		while (column < 10)
		{
			table = row * column;

			if (table > 9)
			{
				_putchar(table / 10 + '0');
				_putchar(table % 10 + '0');
			}
			else if (column != 0)
			{
				_putchar(' ');
				_putchar(table + '0');
			}
			else
			{
				_putchar(table + '0');
			}
			if (column != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			column++;
		}
		_putchar('\n');
		row++;
	}
}
