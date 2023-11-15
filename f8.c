#include "monty.h"
/**
 * themoreerrors - handles errors.
 * @errcd: The error codes are the following:
 * (6) => When the stack it empty for pint.
 * (7) => When the stack it empty for pop.
 * (8) => When stack is too short for operation.
 * (9) => Division by zero.
 */
void themoreerrors(int errcd, ...)
{
	va_list greggor;
	char *opapapap;
	int numbeeeer;

	va_start(greggor, errcd);
	switch (errcd)
	{
		case 6:
			fprintf(stderr, "L%d: can't pint, stack empty\n",
				va_arg(greggor, int));
			break;
		case 7:
			fprintf(stderr, "L%d: can't pop an empty stack\n",
				va_arg(greggor, int));
			break;
		case 8:
			numbeeeer = va_arg(greggor, unsigned int);
			opapapap = va_arg(greggor, char *);
			fprintf(stderr, "L%d: can't %s, stack too short\n", numbeeeer, opapapap);
			break;
		case 9:
			fprintf(stderr, "L%d: division by zero\n",
				va_arg(greggor, unsigned int));
			break;
		default:
			break;
	}
	free_nodes();
	exit(EXIT_FAILURE);
}



/**
 * lnprs - Separates each line into tokens to determine
 * which function to call
 * @bfr: line from the file
 * @nbrln: line number
 * @frt:  storage frt. If 0 Nodes will be entered as a stack.
 * if 1 nodes will be entered as a queue.
 * Return: Returns 0 if the opcode is stack. 1 if queue.
 */

int lnprs(char *bfr, int nbrln, int frt)
{
	char *opcode, *val;
	const char *delimeter = "\n ";

	if (bfr == NULL)
		theerror(4);

	opcode = strtok(bfr, delimeter);
	if (opcode == NULL)
		return (frt);
	val = strtok(NULL, delimeter);

	if (strcmp(opcode, "stack") == 0)
		return (0);
	if (strcmp(opcode, "queue") == 0)
		return (1);

	functionfnd(opcode, val, nbrln, frt);
	return (frt);
}