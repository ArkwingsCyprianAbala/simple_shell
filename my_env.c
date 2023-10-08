#include "shell.h"

char *_getenviron(char *s_varable)
{
	char *temp, *mykey, *my_value, *myenv;
	int n;

	for (n = 0; environ[n]; n++)
	{
		temp = stringdup(environ[n]);
		mykey = strtok(temp, "="); 
		if (stringcomp(mykey, s_varable) == 0)
		{
			my_value = strtok(NULL, "\n");
			myenv = stringdup(my_value);
			free(temp), temp = NULL;
			return (myenv);
		}
		free(temp), temp = NULL;
	}
	return (NULL);
}
