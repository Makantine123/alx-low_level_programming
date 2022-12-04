#include "main.h"
/**
 * binary_to_unit - Function converts a binary number to as unsigned int
 * @b:String of binary numbers
 * Return:The converted number or 0 if b ! (0 | 1) or b == NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_value = 0;
	int i;


	if (!b)
	{
		return (0);
	}


	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}

		dec_value = 2 * dec_value + (b[i] - '0');
	}

	return (dec_value);
}
