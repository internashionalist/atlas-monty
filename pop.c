#include "monty.h"

/**
 * pop - removes top element of stack
 * @stack: double pointer to head of stack
 * @line_number: current line number in bytecode file
 *
 * Return: void
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *current_node; /* current node to free */

	if (!stack || !*stack) /* if stack is empty */
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	current_node = *stack; /* start at head, store in current_node */
	*stack = (*stack)->next; /* move head to next node */
	if (*stack) /* if stack is not empty */
		(*stack)->prev = NULL; /* set prev of new head to NULL */
	free(current_node); /* free current node */
}
