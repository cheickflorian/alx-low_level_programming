#include "main.h"
/**
 * get_endianness -  Checks the endianness
 *
 * Return: 
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr =  (char *)&num;
	return (int)(*ptr);
}
