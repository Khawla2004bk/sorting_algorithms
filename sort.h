#ifndef SORT_H
#define SORT_H

#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/**
 * swapint - Swap two integers in an array
 * @i: first integer to swap
 * @j: second integer to swap
 */
void swapint(int *i, int *j)
{
	int temp;

	temp = *i;
	*i = *j;
	*j = temp;
}

/**
 * swapnode - Swap two nodes in listint_t doubly linked list
 * @head: pointer to the head of the doubly linked list
 * @i: pointer to the first node to swap
 * @j: second node to swap
 */
void swapnode(listint_t **head, listint_t **i, listint_t *j)
{
	(*i)->next = j->next;
	if (j->next != NULL)
		j->next->prev = *i;
	j->prev = (*i)->prev;
	j->next = *i;
	if ((*i)->prev != NULL)
		(*i)->prev->next = j;
	else
		*h = j;
	(*i)->prev = j;
	*i = j->prev;
}

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

void swapnode(listint_t **head, listint_t **i, listint_t *j);
void swapint(int *i, int *j);

#endif
