#include <stdio.h>
#include <unistd.h>

/**
 * main: this functio print the value
 * Return: 0
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n", 59);
	return (1);
}
