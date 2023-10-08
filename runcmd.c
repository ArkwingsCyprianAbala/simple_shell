#include "shell.h" 

int run_cmd(char **cmnd, char **argv, int n_index) 
{
	char *flcmd;
	pid_t chld;
	int my_stts;
	
	flcmd = _getenv_path(cmnd[0]);
	if (!flcmd)
	{
		error_generated(argv[0], cmnd[0], n_index);
		array_free2D(cmnd);
		return(-1);
	}
	chld = fork();
	if (chld == 0)
	{
		if (execve(flcmd, cmnd, environ) == -1)
		{
			free(flcmd), flcmd = NULL; 
			array_free2D(cmnd);
		}
	}
	else
	{
		waitpid(chld, &my_stts, 0);
		array_free2D(cmnd);
		free(flcmd), flcmd = NULL;
	}
	return(WEXITSTATUS(my_stts));
}
