#include "shell.h"

char *stringdup(const char *my_str)
{
	char *my_ptr;
	int j, my_len = 0;

	if (my_str == NULL)
	{
		return(NULL);
	}
	while (my_str[my_len])
	{
		my_len++;
	}
	
	my_ptr = malloc(sizeof(char) * (my_len + 1));
	if (my_ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= my_len; j++)
	{
		my_ptr[j] = my_str[j];
	}
	return (my_ptr);
}
