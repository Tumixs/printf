/*
 * Test file 2
 * Author: Asere Oluwatumise S.
 */
#include "../main.h"
#include <stdio.h>
void bintest(void);
/**
 * main - program start
 *
 * Return: returns 0
 */
/* int main(void) */
/* { */
/* 	bintest(); */

/* 	return (0); */
/* } */

/**
 * bintest - tests the non-custom %b sepcifier
 */
void bintest(void)
{

	_printf("8: %b\n", 8);
	_printf("-1024: %b\n", -1024);
	_printf("UINT_MAX: %b\n", UINT_MAX);
	_printf("INT_MAX: %b\n", INT_MAX);
}
