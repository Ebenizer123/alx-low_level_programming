#include "main.h"
/**
 * main - main block
 * Description: Print the sum of all multiples of 3 or 5 below 1024
 * Return: Always 0
 */
int main(void)
{

	int i = 1;
	int total = 0;

	whle (i < 1024)
	{
		if (i % 3 == 0)
			total += 1;
		else if (i % 5 == 0)
			total += i;


		i++;
	}
	printf("%d\n", total);


	return (0);
}

