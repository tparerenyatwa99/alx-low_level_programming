#include "main.h"

/**
 * _islower - checks whether character passed is lowercase
 * @c: character to be tested
 * Return: 1 if @c is lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
