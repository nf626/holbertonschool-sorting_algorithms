#include "sort.h"

/**
 * swap - function to swap the x and y.
 * @x: first value.
 * @y: second value.
 *
 */
void swap(int *x, int *y)
{
int temp = *x;
*x = *y;
*y = temp;
}
/**
 * quick_sort - function that sorts an array of integers in
 *              ascending order using the Quick sort algorithm.
 * @array: pointer to an array of integers.
 * @size: size of array.
 *
 */
void quick_sort(int *array, size_t size)
{
  if (array == NULL || size < 2)
    {
      return;
    }
  
}
