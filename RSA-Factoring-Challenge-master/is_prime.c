#include "main.h"

int is_prime(int n)
{
	int i, count;

	count = 0;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			count++;
	}

	if (count == 2)
		return (1);

	return (0);
}
