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
	stack_t *stack = NULL; /* head of stack */
	unsigned int line_number = 0; /* current line number */
	char *opcode; /* operation code to execute */
	
	
	
	