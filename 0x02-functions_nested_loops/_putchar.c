#include <unistd.h>

/**
 * _putchar - Write the char c to stdout
 * @c: The character to the print
 *
 * Return: on success 1
 * On error, -1 is returned,and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
