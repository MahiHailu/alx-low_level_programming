#include "main.h"

/**
 * set_bit - The value of a bit to 1 at a given index.
 * @index: starting from 0 of the bit you want to set
 * @n: pointer to the number to change
 * Return: 1 if it worked,-1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
