#include "shell.h"

/**
 *inner_buildCtrl - Handle commands with arguments
 *@cmnd: Return the command
 *@argv: Return arguments
 *@my_stts: Return status
 *@n_index: Return index
 * Return: Always 0 (Success)
 */
void inner_buildCtrl(char **cmnd, char **argv, int *my_stts, int n_index)
{
	if (stringcomp(cmnd[0], "exit") == 0)
	{
		end_term(cmnd, argv, my_stts, n_index);
	}
	else if (stringcomp(cmnd[0], "env") == 0)
	{
		envir_display(cmnd, my_stts);
	}
}
