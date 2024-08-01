#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: double pointer to the head of the stack
 * @line_number: current line number in bytecode file
 * @n: element to be pushed
 *
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number, int n)
{
	stack_t *new_node; /* new node to be pushed */

	new_node = malloc(sizeof(stack_t)); /* malloc for new node */
	if (!new_node) /* if malloc fails, exit with specified error */
	{
		dprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = n; /* set value of new node to new element */
	new_node->prev = NULL; /* set prev of new node to NULL */
	new_node->next = *stack; /* set next of new node to head */
	if (*stack) /* if stack is not empty */
		(*stack)->prev = new_node; /* set prev of head to new node */
	*stack = new_node; /* make new node the head */
}
