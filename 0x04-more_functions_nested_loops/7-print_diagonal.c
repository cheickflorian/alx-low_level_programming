#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - this function draws a diagonal line on the terminal
 *@n: the number of times it should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
  int li, le;

  if(n > 0)
    {
      for (li = 0; li < n; li++)
	{
	  for (le = 0; le < li; le++)
	    {
	      putchar(' ');
	    }
	  putchar('\\');
	  if (li == (n - 1))
	    {
	      continue;
	    }
	  putchar('\n');
	}
    }
  putchar('\n');
}
