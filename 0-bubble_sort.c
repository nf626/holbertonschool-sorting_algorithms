#include "sort.h"
#include <stdbool.h>

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
 * bubble_sort - function that sorts an array of integers in ascending order
 *               using the Bubble sort algorithm.
 * @array: pointer to an array of integers.
 * @size: size of array.
 *
 */
void bubble_sort(int *array, size_t size)
{
size_t i = 0, j;
bool swapped;

if (array == NULL || size < 2)
{
exit(EXIT_FAILURE);
}

while (i < size - 1)
{
j = 0;
swapped = false;
while (j < size - i - 1)
{
if (array[j] > array[j + 1])
{
swap(&array[j], &array[j + 1]);
print_array(array, size);
swapped = true;
}
j = j + 1;
}
if (swapped == false)
{
break;
}
i = i + 1;
}
}
