#include "main.h"

/**
 * _memset - this function fills the memory with constant bytes
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: returns pointer to location filles
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s; 

	while (n--)
	{
		*s = b;
		s++;
	}
	return (p);
}
