#include "monty.h"
int usage_error(void);
int malloc_error(void);
int file_open_error(char *filename);
int unknown_op_error(char *opcode, unsigned int line_number);
int no_inte_error(unsigned int line_number);
/**
 * usage_error - outputs the usage errors
 * Return: EXIT_FAILURE
 */
int usage_error(void)
{
fprintf(stderr, "USAGE: monty file\n");
return (EXIT_FAILURE);
}
/**
 * malloc_error - ouputs the malloc errors
 * Return: EXIT_FAILURE
 */
int malloc_error(void)
{
fprintf(stderr, "Error: malloc failed\n");
return (EXIT_FAILURE);
}
/**
 * f_open_error - gives the output of file opening error with file name
 * @filename: The name of the file failed to open
 * Return: EXIT_FAILURE
 */
int file_open_error(char *filename)
{
fprintf(stderr, "Error: Can't open file %s\n", filename);
return (EXIT_FAILURE);
}
/**
 * unknown_op_error - prints unknown instruction error messages
 * @opcode: opcode where the error occurred
 * @line_number: line number in the monty bytecodes file where the error happened
 * Return: EXIT_FAILURE
 */
int unknown_op_error(char *opcode, unsigned int line_number)
{
fprintf(stderr, "L%u: unknown instruction %s\n",line_number, opcode);
return (EXIT_FAILURE);
}
/**
 * no_int_error - prints invalid monty_push argument error
 * @line_number: line number in the bytecodes file where the error occurred
 * Return: EXIT_FAILURE
 */
int no_inte_error(unsigned int line_number)
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
return (EXIT_FAILURE);
}
