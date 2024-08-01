#include "monty.h"

/**
 * swap - swaps top two elements of stack
 * @stack: double pointer to head of stack
 * @line_number: current line number in bytecode file
 *
 * Return: void
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *first_node; /* first node to swap */
	stack_t *second_node; /* second node to swap */
	int temp; /* to store value of first node */

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	first_node = *stack; /* store head in first_node */
	second_node = (*stack)->next; /* store next node in second_node */

	temp = first_node->n; /* store value of first node */
	first_node->n = second_node->n; /* set value of first node to second */
	second_node->n = temp; /* set value of second node to temp */
}
