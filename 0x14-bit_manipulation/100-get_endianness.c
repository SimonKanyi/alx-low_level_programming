#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)#

	/*
	 * If the first byte of num is 1, the machine is little endian.
	 * Otherwise, it is big endian.
	 */
	return ((int)(*ptr));
}
