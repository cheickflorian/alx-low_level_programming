#include "main.h"
#include <string.h>
/**
 * _strspn - This function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: returns pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k;
	for (i = 0; s[i] != 0; i++)
	{
		k = 0;
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				k = 1;
			}
		}
		if (k == 0)
		{
			break;
		}
	}
	return (i);
}

