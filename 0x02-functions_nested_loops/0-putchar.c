#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alx[] = "_putchar";
	int i = 0;

	while (alx[i] != '\0')
	{	
		_putchar(alx[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
