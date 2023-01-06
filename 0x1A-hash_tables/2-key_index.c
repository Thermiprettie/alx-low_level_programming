#include "hash_tables.h"

/**
 * key_index - fxn that gives the index of a key
 * @key: the key
 * @size: array size of the hash table
 * Return: the index at which the key/value pair will be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int indx;

	indx = hash_djb2(key) % size;
	return (indx);
}
