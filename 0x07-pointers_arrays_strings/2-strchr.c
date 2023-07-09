#include "main.h"

/**
 * _strchr - This function that locates a character  in a string.
 * @s: an input string to search 
 * @c: an input character to locate into string s
 * Return: returns pointer to c position
 */
char *_strchr(char *s, char c)
{
	char *Find = NULL;

	if (s != NULL)
	{
		do {
			if (*s == (char)c)
			{
				Find = s;
				break;
			}
		} while (*s++);
	}
	return (Find);
}
