#include "sort.h"

/**
 * swap_node - function to swap two nodes in list.
 * @head: double pointer to start of list.
 * @n1: double pointer to first node in list to swap.
 * @n2: pointer to second node in list to swap.
 *
 */
void swap_node(listint_t **head, listint_t **n1, listint_t *n2)
{
(*n1)->next = n2->next;
if (n2->next != NULL)
{
n2->next->prev = *n1;
}
n2->prev = (*n1)->prev;
n2->next = *n1;
if ((*n1)->prev != NULL)
{
(*n1)->prev->next = n2;
}
else
*head = n2;
(*n1)->prev = n2;
*n1 = n2->prev;
}
/**
 * insertion_sort_list - function that sorts a doubly linked list of
 *                       integers in ascending order using the
 *                       Insertion sort algorithm.
 * @list: double pointer to a list.
 *
 */
void insertion_sort_list(listint_t **list)
{
listint_t *temp, *iterate = (*list)->next, *insert;

if (list == NULL || *list == NULL || (*list)->next == NULL)
{
return;
}

/** traverse list */
while (iterate != NULL)
{
/** store next value */
temp = iterate->next;
/** store previous value */
insert = iterate->prev;

while (insert != NULL && iterate->n < insert->n)
{
swap_node(list, &insert, iterate);
print_list((const listint_t *)*list);
}
iterate = temp;
}
}
