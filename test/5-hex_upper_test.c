/* 6-hex_lower_test.c
 * Author: Asere Oluwatumise S.
 * Tests the uppercase hexadecimal conversion
 */
#include "../main.h"
#include <stdio.h>
void hex_upper_test(void);
/**
 * main - program start
 *
 * Return: returns 0
 */
/* int main(void) */
/* { */
/* 	hex_upper_test(); */

/* 	return(0); */
/* } */

/**
 * hex_lower_test - tests the lowercase hexadecimal conversion
 */
void hex_upper_test(void)
{
	/* long int res = INT_MAX * 2; */

	/* Test-case-1: Testing positive numbers */
	_printf("74: %X\t", 74);
	printf("74: %X\n", 74);
	/* End of test */

	/* Testing -ve numbers*/
	_printf("-8: %X\t", -8);
	printf("-8: %X\n", -8);
	/* End of test */

	/* Testing defined limits */
	_printf("UINT_MAX: %X\t", UINT_MAX);
	printf("UINT_MAX: %X\n", UINT_MAX);
	_printf("UINT_MAX + 1024: %X\t", UINT_MAX + 1024);
	printf("UINT_MAX + 1024: %X\n", UINT_MAX + 1024);
	_printf("INT_MAX: %X\t", INT_MAX);
	printf("INT_MAX: %X\n", INT_MAX);
	/* End of test */
}
