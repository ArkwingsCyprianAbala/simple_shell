#include "shell.h"
/**
 * error_generated - Entry point
 *@label: Output stderr
 *@my_cmnd: command that out puts the err
 *@n_index: returns char
 * Return: Always 0 (Success)
 */
void error_generated(char *label, char *my_cmnd, int n_index)
{
	char *my_indx, my_msg[] = ": not found\n";

	my_indx = int_to_asci(n_index);

	write(STDERR_FILENO, label, stringlen(label));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, my_indx, stringlen(my_indx));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, my_cmnd, stringlen(my_cmnd));
	write(STDERR_FILENO, my_msg, stringlen(my_msg));

	free(my_indx);
}
