#include "main.h"
#include <stdio.h>
/**
 * _abs: This function that computes the absolute value of an integer
 *
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
