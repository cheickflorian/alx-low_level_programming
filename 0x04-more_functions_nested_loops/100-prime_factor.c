#include <stdio.h>

/**
*main - prints the largest prime factor of a number
*
*Return: return 0
*/

int main(void)

{
	long num = 612852475143;
	int incre;

	while (incre++ < num / 2)
	{
	if (num % incre == 0)
	{
		num /= 2;
		continue;
	}
	for (incre = 3; incre < num / 2; incre += 2)
	{
		if (num % incre == 0)
			num /= incre;
	}
	}
	printf("%ld\n", num);
	return (0);
}
