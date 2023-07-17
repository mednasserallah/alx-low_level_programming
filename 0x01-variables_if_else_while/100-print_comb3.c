#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{

	int i = 0;
	int y = 0;

	char ichar = '0';
	char ychar = '0';

	for (i = 0; i < 10; i++)
	{
		for (y = 0; y < 10; y++)
		{
			ichar = '0' + i;
			ychar = '0' + y;

			if (i < y)
			{
				putchar(ichar);
				putchar(ychar);
				
				if (i < 8)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					putchar('\n');
				}

			}
		}

	}

	return (0);
}
