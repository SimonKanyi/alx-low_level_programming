#include <stdio.h>
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number containing the bit.
 * @index: The index of the bit to get, starting from 0 (LSB).
 *
 * Return: The value of the bit at index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8) /* Check if index is valid */
		return (-1);

	mask = 1UL << index; /* Create a mask with 1 at the index */

	if (n & mask) /* Check if the bit at the index is 1 */
		return (1);
	else
		return (0);
}
