/*
 * functions.c
 *
 *  Created on: Sep 27, 2026
 *      Author: ivan
 */
#include <stdio.h>

int function_add_numbers(int, int, int c);

int main()
{
//	function_add_numbers(1, 2, 3);

	int returnVal;
	returnVal= function_add_numbers(1, 2, 3);

	printf("Value = %d\n", returnVal);


	return 0;
}

int function_add_numbers(int a, int b, int c)
{
	int sum = 0;
	sum = a + b +c;

	return sum;
}
