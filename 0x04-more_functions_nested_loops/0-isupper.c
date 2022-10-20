#include "main.h"

/**
 * _isupper - A function that checks for uppercase character
 * @c: Input character
 * Return: 1 if character is uppercase otherwise 0
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = '0';

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper == 1;
			break;
		}
	}
	return (isupper);
}
