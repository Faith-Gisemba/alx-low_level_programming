#include "main.h"

/**
* _strlen - returns the length of a string
* @s: String to find length of
*
*  Return: length of s
*/

int _strlen(char *s)

{
	int c = 0;


	while (*(s + c))

		c++;

	return (c);

}
