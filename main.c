#include "shell.h"
/**
 * main - shell main function
 * @acnt: Argument count
 * @argv: Arguments
 * Return: 0 on success
 */
int main(int acnt, char **argv)
{
	char *my_lin = NULL;
	char **my_cmd = NULL;
	int my_stts = 0, n_index = 0;
	(void) acnt;

	while (1)
	{
		my_lin = grab_mylin();
		if (my_lin == NULL)
		{
			if (isatty(STDIN_FILENO))
			{
				write(STDOUT_FILENO, "\n", 1);
			}
			return (my_stts);
		}
		n_index++;
		my_cmd = token_split(my_lin);
		if (!my_cmd)
		{
			continue;
		}
		if (inner_build(my_cmd[0]))
		{
			inner_buildCtrl(my_cmd, argv, &my_stts, n_index);
		}
		else
		{
			my_stts = run_cmd(my_cmd, argv, n_index);
		}
	}
}
