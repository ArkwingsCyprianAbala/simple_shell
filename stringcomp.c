#include "shell.h"

int stringcomp(char *st1, char *st2)
{
	int cmpe;

	cmpe = (int)*st1 - (int)*st2;
	while (*st1)
	{
		if (*st1 != *st2)
		{
			break;
		}
		st1++;
		st2++;
		cmpe = (int)*st1 - (int)*st2;
	}
	return (cmpe);
}
