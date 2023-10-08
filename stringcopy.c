#include "shell.h"

char *stringcpy(char *desty, char *srce)
{
	int j = 0;

	while (srce[j])
	{
		desty[j] = srce[j];
		j++;
	}
	desty[j] = '\0';
	return (desty);
}
