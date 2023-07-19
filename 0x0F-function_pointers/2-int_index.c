#include <stdio.h>
#include <string.h>
#include "function_pointers.h"

/**
 * int_index - WWWWWWWWW
 * @array: WWWWWWWW
 * @size: WWWWWWWWWW
 * @cmp: WWWWWWWW
 * Description: WWWWWWWW
 * Return: WWWWWWWWWW
 */
int int_index(int *array, size_t size, int (*cmp)(int))
{
	int i, ret;

	if ((int)size <= 0 || !(*cmp) || !array)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		ret = (*cmp)(array[i]);
		if (ret != 0)
			return (i);
	}

	return (-1);
}
