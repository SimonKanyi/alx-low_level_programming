#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit to set, starting from 0 (LSB).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8) /* Check if index is valid */
		return (-1);

	mask = 1UL << index; /* Create a mask with 1 at the index */

	*n |= mask; /* Set the bit at the index to 1 using bitwise OR */

	return (1);
}
