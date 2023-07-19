#include <unistd.h>

/**
 * _putchar - Writes a single character to the standard output (console).
 *
 * @c: The character to be written to the standard output.
 * Return: On success, it returns the number of characters written
 * (1 in this case)
 * On failure, it returns -1, and the errno variable is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
