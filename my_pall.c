#include "monty.h"

/**
 * f_pall - it prints the stack
 * @head: the stack head
 * @count: the number used
 * Return: nothing
 */

void f_pall(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

