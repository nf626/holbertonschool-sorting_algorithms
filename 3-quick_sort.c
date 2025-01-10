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
 * lomuto_part - order array to two sub-arrays and perform partition.
 * @array: pointer to an array of integers.
 * @size: size of array.
 * @left: first index in sub-array part.
 * @right: last index in sub-array part.
 *
 * Return: partition index.
 */
int lomuto_part(int *array, size_t size, int left, int right)
{
int *pivot, low, high;

pivot = array + right;
high = low = left;
while (low < right)
{
if (array[low] < *pivot)
{
if (high < low)
{
swap(array + low, array + high);
print_array(array, size);
}
high = high + 1;
}
low = low + 1;
}
if (array[high] > *pivot)
{
swap(array + high, pivot);
print_array(array, size);
}
return (high);
}
/**
 * lomuto_sort - function that uses quicksort through recursion.
 * @array: pointer to an array of integers.
 * @size: size of array.
 * @left: first index of array.
 * @right: last index of array.
 *
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
int partition;

if (right - left > 0)
{
partition = lomuto_part(array, size, left, right);
lomuto_sort(array, size, left, partition - 1);
lomuto_sort(array, size, partition + 1, right);
}
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

lomuto_sort(array, size, 0, size - 1);
}
