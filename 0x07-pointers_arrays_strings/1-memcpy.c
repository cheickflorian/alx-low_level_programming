#include "main.h"

/**
 * _memcpy - thisunction copie memory area.
 * @dest: an array where src will be copied
 * @src: the string to be copied
 * @n: the number of the characters to copy
 * Return: The memcpy function returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *d = dest;
	char *s = src; 

	for ( i = 0; i < n; i++)
		d[i] = s[i];
	return (dest);
}
