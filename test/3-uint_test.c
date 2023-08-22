/*
 * Test-file: 3-uint_test.c
 * Author: Asere Oluwatumise S.
 * Testing the %u sepcifier
 */
#include "../main.h"
#include <stdio.h>
void utest(void);
/**
 * main - progarm start
 *
 * Return: returns 0
 */
/* int main(void) */
/* { */
/* 	utest(); */

/* 	return(0); */
/* } */
/**
 * utest - tests the %u specifier
 */
void utest(void)
{
	/* unsigned int num = -12; */
	/* Test1: Testing +ve integers */
	/* printf("%d", num); */
	/* printf("UNIT_MAX: %ld\n", UINT_MAX); */
	/* printf("UNIT_MAX - 12: %ld\n", (UINT_MAX + 1) - num); */
	printf("%u", 12);
	printf("\n");
	_printf("%u", 12);
	printf("\n");
	/* End of test*/

	/*Test2: Testing -ve integers */
	printf("%u", -12);
	printf("\n");
	_printf("%u", -12);
	printf("\n");
	/* End of test */
}
