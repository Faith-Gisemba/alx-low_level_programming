#include "main.h"

/**
 * ptintf_alphabet _x10-fuction that prints alphabets ten times
 *
 * Return; Always 0.
 */

void print_alphabet(void)
{
	char j;

	for(j = 'a'; j <= 'z'; j++;) 
	{
		_putchar(j);
	}

	_putchar('\n');

	return (0);

};
print_alphabet();
