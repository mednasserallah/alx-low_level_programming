#include <stdio.h>

/**
 * main - Entery point
 *
 * description: check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	long int i = 612852475143;
	long int factors;

	for (factors = 2; factors < i; factors++)
	{
		if (i % factors == 0)
		{
			i /= factors;
		}
	}

	printf("%ld\n", factors);
	return (0);
}
