#include "shell.h"

void str_reverse(char *strin, int leng)
{
	char tempo;
	int begin = 0;
	int complete = leng - 1;

	while (begin < complete)
	{
		tempo = strin[begin];
		strin[begin] = strin[complete];
		strin[complete] = tempo;
		begin++;
		complete--;
	}
}
