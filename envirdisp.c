#include "shell.h"

void envir_display(char **cmnd, int *my_stts)
{
	int j;

	for (j = 0; environ[j]; j++)
	{
		write(STDOUT_FILENO, environ[j], stringlen(environ[j]));
		write(STDOUT_FILENO, "\n", 1);
	}
	array_free2D(cmnd);
	(*my_stts) = 0;
}
