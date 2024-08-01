#include "monty.h"

/**
 * main - entry point for The Full Monty
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */

int main(int argc, char *argv[])
{
	FILE *file; /* file pointer to bytecode file being interpreted */
	char *line = NULL; /* line to read from file */
	size_t len = 0; /* length of line */
	ssize_t read; /* return value of getline */
	unsigned int line_number = 0; /* current line number */
	stack_t *stack = NULL; /* head of stack */
	char *opcode; /* operation code to execute */

	if (argc != 2) /* if number of arguments isnt 2 */
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r"); /* open file for reading */
	if (!file) /* if file cannot be opened */
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&line, &len, file)) != -1) /* read line from file */
	{
		line_number++; /* increment line number */
		opcode = strtok(line, " \t\n"); /* get opcode */
		if (!opcode || opcode[0] == '#') /* if no opcode or comment */
			continue; /* skip that line */
		exec_instruct(opcode, &stack, line_number); /* execute opcode */
	}
	free(line); /* free line buffer */
	fclose(file); /* close file */
	free_stack(stack); /* free stack */
	return (EXIT_SUCCESS);
}
