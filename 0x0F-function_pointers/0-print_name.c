#include "function_pointers.h"
/**
 * print_name - Prints name
 * @name: Name
 * @f:pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
