#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 *@array: int array pointer
 *@size: size_t size of the given array
 *@action: void function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
return;
while (size-- > 0)
{
action(*array);
array++;
}
}
