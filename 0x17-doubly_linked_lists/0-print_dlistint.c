/*
 * File: 0-print_dlistint.c
 * Authour: HC Ngobeni
 */
 

#include "lists.h"



size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->num);
		h = h->next;
	}

	return (nodes);

}
