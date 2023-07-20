#include "variadic_functions.h"

/**
 * print_strings - Prints strings separated by a given separator.
 * @separator: The string used to separate the strings (or NULL).
 * @n: The number of strings passed to the function.
 *
 * Return: No return value.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list valist;
    unsigned int i;
    char *str;

    va_start(valist, n);

    for (i = 0; i < n; i++)
    {
        str = va_arg(valist, char *);

        if (str)
            printf("%s", str);
        else
            printf("(nil)");

        if (i < n - 1 && separator)
            printf("%s", separator);
    }

    printf("\n");
    va_end(valist);
}
