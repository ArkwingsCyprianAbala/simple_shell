#include "shell.h"

char *stringcat(char *desty, char *srce)
{
	char *pi = desty;

	while (*pi)
	{
		pi++;
	}

	while (*srce)
	{
		*pi = *srce;
		pi++;
		srce++;
	}
	*pi = '\0';
	return (desty);
}
