#include "monty.h"

/**
 * pall - prints all values on stack, starting from top
 * @stack: double pointer to head of stack
 * @line_number: current line number in bytecode file
 *
 * Return: void
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current_node = *stack; /* current node to print */

	(void)line_number; /* unused */

	while (current_node) /* while there are still nodes to print */
	{
		printf("%d\n", current_node->n); /* print value of current node */
		current_node = current_node->next; /* move to next node */
	}
}