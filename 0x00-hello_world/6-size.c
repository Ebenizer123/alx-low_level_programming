#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	double d;
	char c;
	long int li;
	long long int lli;
	float f;

	printf("Size of a c: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an i: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of li: %lu.\n", (unsigned long)sizeof(li));
	printf("Size of lli: %lu.\n", (unsigned long)sizeof(lli));
	printf("Size of a f: %lu.\n", (unsigned long)sizeof(f));
	return (0);
}
