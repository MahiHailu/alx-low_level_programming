#include "main.h"

/**
 * get_bit - returns to value of a bit at an index.
 * @n: checking bits
 * @index: the bit of an index
 *
 * Return: to value of an index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
