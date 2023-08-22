/*
 * Test-file: 4-octal_test.c
 * Author: Asere Oluwatumise S.
 * Testing the %o specifier
 */
#include "../main.h"
#include <stdio.h>
void oct_test(void);
/**
 * main - program start
 *
 * Return: returns 0
 */
/* int main(void) */
/* { */
/* 	oct_test(); */

/* 	return (0); */
/* } */

/**
 * oct_test - tests the %o specifier
 */
void oct_test(void)
{
	printf("%o", 8);
	printf("\n");
	_printf(" %o", 8);
	printf("\n");
	printf("---\n");

	printf("%o", -16);
	printf("\n");
	_printf(" %o", -16);
	printf("\n");
}
