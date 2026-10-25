/*
 * main.c
 *
 *  Created on: Sep 27, 2026
 *      Author: ivan
 */
#include <stdio.h>
#include <inttypes.h>
#include "math.h"

int main(void)
{
	printf("Add: %d\n", math_add(0x0FFF1111, 0x0FFF1111));
	printf("Sub: %d\n", math_sub(0x0FFF1111, 0x0FFF1111));
	printf("Mul: %llx\n", math_mul(0x0FFF1111, 0x0FFF1111));
	printf("Div: %f\n", math_div(0x0FFF1111, 0x0FFF1111));



	return 0;
}

