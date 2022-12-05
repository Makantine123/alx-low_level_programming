#include "main.h"
/**
 * get_endianness - Function that checks the endianness
 * Return: 0 if big endianness, 1 if little endianness
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char*) & i;

	if (*c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
