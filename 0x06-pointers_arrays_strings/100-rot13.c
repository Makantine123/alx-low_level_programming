#include "main.h"

/**
 * rot13 - function encodes at string using rot13
 * @str: String to be encoded
 * Return: Encoded string
 */
char *rot13(char *str)
{
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encod[] =  "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = encod[j];
				break;
			}
		}
	}
	return (str);
}
