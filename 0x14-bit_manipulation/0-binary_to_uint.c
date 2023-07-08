#include "main.h"

/**
 *  binary_to_uint - converts a binary number to unsigned int.
 *  @b:binary
 *
 *   * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int r;
	unsigned int s;

	s = 0;
	if (!b)
		return (0);
	for (r = 0; b[r] != '\0'; r++)
	{
		if (b[r] != '0' && b[r] != '1')
			return (0);
	}
	for (r = 0; b[r] != '\0'; r++)
	{
		s <<= 1;
		if (b[r] == '1')
			s += 1;
	}
	return (s);
}
