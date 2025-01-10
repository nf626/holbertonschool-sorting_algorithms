#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending order
 *                  using the Selection sort algorithm.
 * @array: pointer to an array of integers.
 * @size: size of array.
 *
 */
void selection_sort(int *array, size_t size)
{
  size_t i = 0, j, min_index;
  int temp;
  
  if (array == NULL || size < 2)
    {
      return;
    }
  
  while (i < size - 1)
    {
      min_index = i;
      j = i + 1;
      while (j < size)
	{
	  if (array[j] < array[min_index])
	    {
	      min_index = j;
	    }
	  j = j + 1;
	}
      temp = array[i];
      array[i] = array[min_index];
      array[min_index] = temp;
      print_array(array, size);
      i = i + 1;
    }
}
