#include "main.h"

/**
 * print_dec - function that prints integers from variadic functions to base 10
 * @grp: parameter
 *
 * Return: characters to be printed
 */

int print_dec(va_list grp)
{
	int n = 0;
	int count = 0;
	int digit;
	int our_array[10];
	char k[1];

	/* get integers from variadic function */
	digit = va_arg(grp, int);

	/* separate the digits and place them in an array */
	while (digit != 0)
	{
		our_array[n] = (digit % 10);
		digit = digit / 10;
		if (digit == 0)
			break;
			n++;
	}
	for (n ; n >= 0; n--)
	{
	/* convert integers to characters */
		k[0] = ('0' + our_array[n];
	/* write function only takes integers */
		count += write(1, k, 1);
	}
	return (count);
}
