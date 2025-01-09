#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of
 *                       integers in ascending order using the Insertion sort algorithm.
 * @list: double pointer to a list.
 *
 */
void insertion_sort_list(listint_t **list)
{
  if (list == NULL || *list == NULL || (*list)->next == NULL)
    {
      return;
    }
}
