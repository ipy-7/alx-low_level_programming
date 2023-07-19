#include <stdio.h>
#include <string.h>

/**
 * array_iterator - WWWWWWWWW
 * @array: WWWWWWWW
 * @size: WWWWWWWWWW
 * @action: WWWWWWWW
 * Description: WWWWWWWW
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !(*action))
		return;

	for (i = 0; i < (int)size; i++)
	{
		(*action)(array[i]);
	}
}
