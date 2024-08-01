#include "monty.h"

/**
 * free_stack - frees stack
 * @stack: pointer to head of stack
 *
 * Return: void
 */

void free_stack(stack_t *stack)
{
	stack_t *current_node; /* current node to free */

	while (stack) /* while there are nodes to free */
	{
		 current_node = stack; /* start at head, store in current_node */
		 stack = stack->next; /* move head to next node */
		 free(current_node); /* free current node, repeat */
	}
}
