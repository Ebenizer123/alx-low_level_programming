#include "main.h"
#include <stdio.h>
/**
 * *_strcat - a function appends the concatenates two strings.
 *  @dest: a string
 * @src: a string
 * Return: string.
 */
char *_strcat(char *dest, char *src)
{
	int l;
	int i;

	for (l = 0; dest[1] != '\0'; l++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[l + i] = src[i];
	}
	return (dest);
}
