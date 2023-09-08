#include "hash_tables.h"

/**
 * key_index - Get the index at which the key-value pair exists
 *              Stored in an array of  hash tables.
 * @key: The key to get the index of.
 * @size: Size of  hash table array.
 *
 * Return: The index of the key.
 *
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
