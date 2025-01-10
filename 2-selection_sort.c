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
 * selection_sort - function that sorts an array of integers in ascending order
 *                  using the Selection sort algorithm.
 * @array: pointer to an array of integers.
 * @size: size of array.
 *
 */
void selection_sort(int *array, size_t size)
{
  size_t i = 0, j;
  int *min_index;
  
  if (array == NULL || size < 2)
    {
      return;
    }
  
  while (i < size - 1)
    {
      j = i + 1;
      min_index = array + i;
      while (j < size)
	{
	  if (array[j] < *min_index)
	    {
	      min_index = array + j;
	    }
	  else
	    {
	      min_index = min_index;
	    }
	  j = j + 1;
	}
      if ((array + i) != min_index)
	{
	  swap(array + i, min_index);
	  print_array(array, size);
	}
      i = i + 1;
    }
}
