#include "shell.h"
char *_getenv_path(char *mycmd)
{
	char *patenv, *full_search, *dir_env;
	struct stat s_t;
	int j;
	
	for (j = 0; mycmd[j]; j++)
	{
		if (mycmd[j] == '/')
		{
			if (stat(mycmd, &s_t) == 0)
			{
				return (stringdup(mycmd));
			}
			return (NULL);
		}
	}
	
	patenv = _getenviron("PATH");
	if (!patenv)
	{
		return (NULL);
	}

	dir_env = strtok(patenv, ":");
	while (dir_env)
	{
		full_search = malloc(stringlen(dir_env) + stringlen(mycmd) + 2);
		if (full_search)
		{
			strcpy(full_search, dir_env);
			stringcat(full_search, "/");
			stringcat(full_search, mycmd);
			if (stat(full_search, &s_t) == 0)
			{
				free(patenv);
				return(full_search);
			}
			free(full_search), full_search = NULL;

			dir_env = strtok(NULL, ":");
		}
	}
	free(patenv);
	return (NULL);
}
