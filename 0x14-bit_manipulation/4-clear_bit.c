#include "main.h"

/**
 * clear_bit - Sets the value of a given bit to 0 at a given index.
 * @n: pointer to the num to change
 * @index: index of the bit to be  cleared.
 *
 * Return: 1 for worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
