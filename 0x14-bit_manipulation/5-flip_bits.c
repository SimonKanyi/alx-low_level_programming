#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip to convert n to m.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m; /* XOR both numbers to find differing bits */
	unsigned int count = 0;

	/* Count the number of set bits in xor_result */
	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
