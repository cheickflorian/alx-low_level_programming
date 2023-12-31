#include <stdio.h>
#include "main.h"

/**
 * puts_half - print half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int i = 0, len = 0, j;

	while (str[i++])
		len++;

	if ((len % 2) == 0)
		j = len /2;
	else
		j = (len + 1) / 2;
	
	for (i = j; i < len; i++)
		putchar(str[i]);
	
	putchar('\n');
}
