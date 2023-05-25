#include "monty.h"
int pop_error(unsigned int line_number);
int short_stack_error(unsigned int line_number, char *op);
int div_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);
/**
 * pop_error - gives err output messages of pop where there are empty stacks
 * @line_number: line number in the script where the error occured
 * Return: EXIT_FAILURE
 */
int pop_error(unsigned int line_number)
{
fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
return (EXIT_FAILURE);
}
/**
 * pint_error - prints pint error messages for the stacks that are empty
 * @line_number: The line number in bytecodes file where the error occurred
 * Return: EXIT_FAILURE
 */
int pint_error(unsigned int line_number)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
return (EXIT_FAILURE);
}
/**
 * short_stack_error - outputs monty math function error messages
 * for stacks or queues smaller than two nodes.
 * @line_number: The line number in monty bytecodes file where error occurred
 * @op: Operation where the error occurred.
 * Return: EXIT_FAILURE
 */
int short_stack_error(unsigned int line_number, char *op)
{
fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
return (EXIT_FAILURE);
}
/**
 * div_error - prints division error messages for division by 0
 * @line_number: The line number in bytecodes file where error occurred
 * Return: EXIT_FAILURE
 */
int div_error(unsigned int line_number)
{
fprintf(stderr, "L%u: division by zero\n", line_number);
return (EXIT_FAILURE);
}
/**
 * pchar_error - Gives pchar errors for the empty stacks
 * non-character values.
 * @line_number: line number in Monty bytecodes file where error happened
 * @message: Equivalent error message to print
 * Return: EXIT_FAILURE
 */
int pchar_error(unsigned int line_number, char *message)
{
fprintf(stderr, "L%u: can't pchar, %s\n", line_number, message);
return (EXIT_FAILURE);
}
