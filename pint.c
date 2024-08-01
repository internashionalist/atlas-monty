#include "monty.h"

/** pint - prints value at top of stack
 * @stack: double pointer to head of stack
 * @line_number: current line number in bytecode file
 * 
 * Return: void
 */

void pint(stack_t **stack, unsigned int line_number)
{
    if (!stack || !*stack)
    {
	 fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	 exit(EXIT_FAILURE);
    }
    printf("%d\n", (*stack)->n);
}
