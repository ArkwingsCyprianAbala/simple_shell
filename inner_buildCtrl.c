#include "shell.h"
/**
 * inner_build - Entry point
 *@cmnd: Returns inbuilds
 * Return: Always 0 (Success)
 */
int inner_build(char *cmnd)
{
	char *inbuilds[] = {"exit", "env", "setenv", "cd", NULL};
	int j;

	for (j = 0; inbuilds[j]; j++)
	{
		if (stringcomp(cmnd, inbuilds[j]) == 0)
		{
			return (1);
		}
	}
	return (0);
}
