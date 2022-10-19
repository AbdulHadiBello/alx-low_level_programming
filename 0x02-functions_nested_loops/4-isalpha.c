#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic character.
 * @c: character to be checked
 * Return: 1 if character is a letter, lowercase or uppercase, otherwise 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
