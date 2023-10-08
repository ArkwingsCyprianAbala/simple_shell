#include "shell.h"

void end_term(char **cmnd, char **argv, int *mystts, int n_index)
{
	int value_of_exit = (*mystts);
	char *my_idx, err_mssg[] = ": exit: command not recognized: ";

	if (cmnd[1])
	{
		if (num_positive(cmnd[1]))
		{
			value_of_exit = asc_to_int(cmnd[1]);
		}
		else
		{
			my_idx = int_to_asci(n_index);
			write(STDERR_FILENO, argv[0], stringlen(argv[0]));
			write(STDERR_FILENO, ": ", 2);
			write(STDERR_FILENO, my_idx, stringlen(my_idx));
			write(STDERR_FILENO, err_mssg, stringlen(err_mssg));
			write(STDERR_FILENO, cmnd[1], stringlen(cmnd[1]));
			write(STDERR_FILENO, "\n", 1);
			free(my_idx);
			array_free2D(cmnd);
			(*mystts) = 2;
			return;
		}
	}
	array_free2D(cmnd);
	exit(value_of_exit);
}
