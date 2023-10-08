#include "shell.h"

void array_free2D(char **arry)
{
	int j;
	if (!arry)
	{
		return;
	}

	for (j = 0; arry[j]; j++)
	{
		free(arry[j]);
		arry[j] = NULL;
	}

	free(arry), arry = NULL;
}
