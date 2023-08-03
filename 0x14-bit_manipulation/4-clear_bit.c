#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit to clear, starting from 0 (LSB).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8) /* Check if index is valid */
		return (-1);

	mask = 1UL << index; /* Create a mask with 1 at the index */

	mask = ~mask; /* Invert mask to have 1s at all positions except the index */
	*n &= mask; /* Clear the bit at the index to 0 using bitwise AND */

	return (1);
}
