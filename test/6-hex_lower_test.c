/* 6-hex_lower_test.c
 * Author: Asere Oluwatumise S.
 * Tests the lowercase hexadecimal conversion
 */
#include "../main.h"
#include <stdio.h>
void hex_lower_test(void);
/**
 * main - program start
 *
 * Return: returns 0
 */
/* int main(void) */
/* { */
/* 	hex_lower_test(); */

/* 	return(0); */
/* } */

/**
 * hex_lower_test - tests the lowercase hexadecimal conversion
 */
void hex_lower_test(void)
{
	/* long int res = INT_MAX * 2; */

	/* Test-case-1: Testing positive numbers */
	printf("%x", 74);
	printf("\n");
	_printf("%x", 74);
	_printf("\n");
	/* End of test */

	/* Testing -ve numbers*/
	/* End of test */

	/* Testing defined limits */
	printf("%x", UINT_MAX);
	printf("\n");
	_printf("%x", UINT_MAX);
	printf("\n");
	/* printf("%x", res); */
	/* _printf(" %x", res); */
	/* printf("\n"); */
	/* /1* End of test *1/ */
}
