#include <stddef.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array == NULL || action == NULL)
        return;

    for (size_t i = 0; i < size; i++)
    {
        action(array[i]);
    }
}
