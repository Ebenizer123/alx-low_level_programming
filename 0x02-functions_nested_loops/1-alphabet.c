#include "main.h"

/**
 * main -check this code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
