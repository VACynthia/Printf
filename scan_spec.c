#include "main.h"

/**
 * scan_spec - checks for a function specifier
 * @format: the specifier
 *
 * Return: pointer to a function
 * NULL if unsuccessful
 */

int (*scan_spec(const char *format))(va_list)
{
	int i;
	cal_t our_array[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent},
		{NULL, NULL}};

	for (i = 0 ; our_array[i].m != NULL ; i++)
	{
		if (*(our_array[i].m) == *format)
		{
			return (our_array[i].z);
		}
	}
	return (NULL);
}
