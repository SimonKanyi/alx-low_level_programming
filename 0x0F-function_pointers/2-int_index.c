#include "function_pointers.h"

/**
 * int_index - will search for an integer in an array.
 * @array: input integer array.
 * @size: size of the array.
 * @cmp: this is the pointer to the function used to compare values.
 *
 * Return: Index of the first element for which the cmp
 * function does not return 0. If no elements match,
 * return -1. If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL|| size <=0 || cmp==NULL)
        return (-1);

        for (i=0; i<size; i++)
        {
            if (cmp(array[i]))
                return (i)
        }
}
