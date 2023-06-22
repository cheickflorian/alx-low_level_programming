#include <stdio.h>
#include "main.h"

/**
*print_triangle 
*@size: size parameter of triangle.
*Return: returns nothing.
*/

void print_triangle(int size)

{
	int incre1, incre2;

	if (size > 0)
	{
		for (incre1 = 1; incre1 <= size; incre1++)
		{
			for ((incre2 = size - incre1); incre2 > 0; incre2--)
			{
				putchar(' ');
			}
			for (incre2 = 0; incre2 < incre1; incre2++)
			{
				putchar('#');
			}
			if (incre1 == size)
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
