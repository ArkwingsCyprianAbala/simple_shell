#include "shell.h"

/**
 * asc_to_int - Entry point
 *@my_str: Return string
 * Return: Always 0 (Success)
 */

int asc_to_int(char *my_str)
{
	int m, numbr = 0;

	for (m = 0; my_str[m]; m++)
	{
		numbr *= 10;
		numbr += (my_str[m] - '0');
	}
	return (numbr);
}
