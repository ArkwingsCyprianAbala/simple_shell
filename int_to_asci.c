#include "shell.h"
/**
 * int_to_asci - Entry point
 *@m: Return string duplicate
 * Return: Always 0 (Success)
 */
char *int_to_asci(int m)
{
	char buf_size[20];
	int j = 0;

	if (m == 0)
	{
		buf_size[j++] = '0';
	}
	else
	{
		while (m > 0)
		{
			buf_size[j++] = (m % 10) + '0';
			m /= 10;
		}
	}
	buf_size[j] = '\0';
	str_reverse(buf_size, j);

	return (stringdup(buf_size));
}
