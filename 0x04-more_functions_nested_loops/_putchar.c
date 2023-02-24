#include "main.h"
#include <unistd.h>
/**
 * _putcahr - writes the character c to stdout
 * @c: The caharacter to print
 *
 * Return: On success1.
 * On error, -1 is returned, and errono is set appropriately.
 */
int _putcahr(char c)
{
	return (write(1 &c, 1));
}
