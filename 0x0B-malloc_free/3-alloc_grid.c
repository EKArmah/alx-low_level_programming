#include "main.h"

/**
 * alloc_grid - create a 2D array of ints
 * @width: width of arr
 * @height: height of array
 *
 * Return: pointer to arr
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int temp, count1 = 0, count2 = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (count1 = 0; count1 < height; count1++)
	{
		arr[count1] = malloc(sizeof(int) * width);
		if (arr[count1] == NULL)
		{
			for (temp = 0; temp <= count1; temp++)
			{
				free(arr[temp]);
			}
			return (NULL);
		}
		for (count2 = 0; count2 < width; count2++)
		{
			arr[count1][count2] = 0;
		}
	}
	return (arr);
}
