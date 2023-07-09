#include "main.h"

/**
 * _strstr - This function that locates a substring
 * @haystack:  an input string to search in
 * @needle: an input string to locatw into string haystack
 * Return: This pointer to the beginning of the located substring,or NULL if the substring iis not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two =  needle;
		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
