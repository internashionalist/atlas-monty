#include "monty.h"

/**
 * add - adds top two elements of stack
 * @stack: double pointer to head of stack
 * @line_number: current line number in bytecode file
 *
 * Return: void
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *first_node; /* first node to add */
	stack_t *second_node; /* second node to add */

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	first_node = *stack; /* store head in first_node */
	second_node = (*stack)->next; /* store next node in second_node */
	second_node->n += first_node->n; /* add first node to second */
	pop(stack, line_number); /* remove first node */
}
