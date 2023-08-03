#include "main.h"
/**
 * flip_bits -  counts the number
 * @n: the number
 * @m: the number to flip n
 * Return: The necessary number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m, bits = 0;

	while (flip > 0)
	{
		bits += (flip & 1);
		flip >>= 1;
	}
	return (bits);
}
