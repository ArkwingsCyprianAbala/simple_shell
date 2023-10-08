#include "shell.h"

int stringlen(char *sc)
{
	int my_len = 0;

	while (sc[my_len])
	{
		my_len++;
	}
	return (my_len);
}
