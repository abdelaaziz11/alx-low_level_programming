#include "hash_tables.h"
#include <stddef.h>
/**
 * hash_table_create - Creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int ht_size;

	if (!ht_size)
		return (NULL);
	else
		ht_size = size;
	return (ht_size);
}
