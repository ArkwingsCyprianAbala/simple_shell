#include "shell.h"

char **token_split(char *my_line)
{
	int x = 0, y = 0;
	char *my_tkn, *temp, **my_arry = NULL;

	if (my_line == NULL)
	{
		return (NULL);
	}

	temp = stringdup(my_line);
	my_tkn = strtok(temp, MYDLM);
	if (!my_tkn)
	{
		free(my_line), my_line = NULL;
		free(temp), temp = NULL;
		return (NULL);
	}
	while (my_tkn)
	{
		y++;
		my_tkn = strtok(NULL, MYDLM);
	}
	free(temp), temp = NULL;

	my_arry = malloc(sizeof(char *) * (y + 1));
	if (!my_arry)
	{
		free(my_line), my_line = NULL;
		free(temp), temp = NULL;
		return (NULL);
	}
	my_tkn = strtok(my_line, MYDLM);
	while (my_tkn)
	{
		my_arry[x++] = stringdup(my_tkn);
		my_tkn = strtok(NULL, MYDLM);
	}
	my_arry[x] = NULL;
	free(my_line), my_line = NULL;

	return (my_arry);
}
