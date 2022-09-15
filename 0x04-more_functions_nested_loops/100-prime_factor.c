#include <stdio.h>

/**
 * main - finds the largest prime factor of a number
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	long int n;
	long int m;
	long int o;

	n = 612852475143;
	m = -1;

	while (n % 2 == 0)
	{
		m = 2;
		n /= 2;
	}

	for (o = 3; o <= sqrt(n); o = o + 2)
	{
		while (n % o == 0)
		{
			m = o;
			n = n / i;
		}
	}

	if (n > 2)
		m = n;

	printf("%ld\n", m);

	return (0);
}
