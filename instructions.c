#include "monty.h"

/**
 * is_digit - checks if a string is a digit
 * @str: string to check
 * 
 * Return: 1 if number, 0 if not
 */

int is_digit(char *str)
{
	int i = 0; /* iterator */

	if (str[0] == '-') /* if negative number */
		i++; /* move to next character */
	for (; str[i]; i++) /* iterate through string */
	{
		if (str[i] < '0' || str[i] > '9') /* if not a digit */
			return (0); /* indicate so */
	}
	return (1); /* if digit, return 1 */
}

/**
 * execute_instruction - executes the opcode given
 * @opcode: opcode to execute
 * @stack: double pointer to head of stack
 * @line_number: current line number in bytecode file
 */

void execute_instruction(char *opcode, stack_t **stack, unsigned int line_number)
{
	char *arg; /* argument to push */

	if (strcmp(opcode, "push") == 0) /* if we pushin */
	{
		arg = strtok(NULL, " \t\n"); /* get arg, minus delims */
		if (!arg || !is_digit(arg)) /* if no arg or not a number */
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		push(stack, line_number, atoi(arg)); /* push the number */
	}
	else if (strcmp(opcode, "pall") == 0) /* if we pallin */
		pall(stack, line_number); /* pall the stack */
	else /* if we don't know what we doin */
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
		exit(EXIT_FAILURE);
	}
}
	