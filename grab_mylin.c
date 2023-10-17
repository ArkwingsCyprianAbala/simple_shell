#include "shell.h"
/**
 * grab_mylin - Entry point
 *
 * Return: Always 0 (Success)
 */
char *grab_mylin(void)
{
	char *my_lin = NULL;
	size_t s_mylen = 0;
	ssize_t m;

	if (isatty(STDIN_FILENO))
	{
		write(STDOUT_FILENO, "monicabalashell $ ", 18);
	}
	m = getline(&my_lin, &s_mylen, stdin);
	if (m == -1)
	{
		free(my_lin);
		return (NULL);
	}
	return (my_lin);
}
