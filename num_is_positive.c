#include "shell.h"

int num_positive(char *my_str)
{
	int n;

	if (!my_str)
	{
		return (0);
	}
	for (n = 0; my_str[n]; n++)
	{
		if (my_str[n] < '0' || my_str[n] > '9')
		{
			return (0);
		}
	}
	return (1);
}
