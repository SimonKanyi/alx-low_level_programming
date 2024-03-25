#include "main.h"
#include <stdio.h>

int main(void)
{
    printf("%d\n", _strlen("My Dyn Lib"));
    return (0); // Return 0 instead of EXIT_SUCCESS
}
