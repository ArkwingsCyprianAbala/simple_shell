#include "shell.h"

/**
 * envir_display - Entry point
 *@cmnd: Return free
 *@my_stts: loops through the env and return 0
 * Return: Always 0 (Success)
 */
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
