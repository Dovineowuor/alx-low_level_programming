<<<<<<< HEAD
/**
 * hash_djb2 - Hash function, takes a string and turns it into a hash number
 * @str: the string, a constant value unrepeated in the hash table
 *
 * Return: The hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
=======
#include "hash_tables.h"

/**
 * hash_djb2 - compute a hash using the djb2 algorithm
 * @str: a pointer to a string to hash
 *
 * Return: the dbj2 hash of str
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	unsigned int c = '\0';

	while ((c = *str++))
		hash += (hash << 5) + c;

	return (hash);
}
>>>>>>> 7df1126fbebcad15ae3faebff62efa521081b15b
