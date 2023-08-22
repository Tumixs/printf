#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
void holb_test(void)
{
	int len, len2;
	long int l = UINT_MAX;

	l += 1024;
	len2 = printf("%u", l);
	len = _printf("%u", l);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
	}
}
