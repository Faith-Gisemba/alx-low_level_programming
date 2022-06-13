#include "main.h"
/**
 * -strlen - Returns the length of a string
 *
 *  Return: String length
 */
int _strlen(char *s)
{
	int c = 0;


	for (; *s != '\'; s++)
	{
		c++;
	}

	return (c);
}
