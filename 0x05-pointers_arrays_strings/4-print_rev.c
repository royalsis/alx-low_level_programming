#include "main.h"

/**
 * print_rev - imprime en reversa
 *
 * @s: string
 *
 * return: 0
 *
*/

void reverse_array(int *a, int n)
{
	int i, temp;
	
	i = 0;

	n--;

	while (i < n)

	{
		temp = a[i];

		a[i] = a[n];

		a[n] = temp;

		i++;

		n--;
	}
}

