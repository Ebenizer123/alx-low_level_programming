#include "main.h"
#include<stdio.h>
/*
 * main - entry point
 * @void: a fucntion of main
 * Return: Always 0.
 */

int main(void)
{
	int num1, num2, product;

	printf("Enter two numbers:");
	scanf("%d ,%d\n", &num1, &num2);

	product = num1 * num2;
	printf("Product of two numbers: %d", product);

	return  (0);
}
