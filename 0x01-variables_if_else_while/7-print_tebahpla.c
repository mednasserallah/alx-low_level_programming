#include <stdio.h>

/**
 * main - display alphabet in reverse and lowercase
 * Return: return 0
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');

	return (0);
}
