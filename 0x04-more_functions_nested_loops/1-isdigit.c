#include "main.h"

/**
 * _isdigit - the function check digit from 0 to 9
 * @c: input of integer
 * Return: return 1 if c is digit otherwise 0
 */
int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
