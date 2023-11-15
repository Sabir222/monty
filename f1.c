#include "monty.h"







/**
 * theerror - Prints appropiate error messages determined by their error code.
 * @errcd: The error codes are the following:
 * (1) => The user does not give any file or more than one file to the program.
 * (2) => The file provided is not a file that can be opened or read.
 * (3) => The file provided contains an invalid instruction.
 * (4) => When the program is unable to malloc more memory.
 * (5) => When the parameter passed to the instruction "push" is not an int.
 * (6) => When the stack it empty for pint.
 * (7) => When the stack it empty for pop.
 * (8) => When stack is too short for operation.
 */
void theerror(int errcd, ...)
{
	va_list greggor;
	char *opapapap;
	int numbeeeer;

	va_start(greggor, errcd);
	switch (errcd)
	{
		case 1:
			fprintf(stderr, "USAGE: monty file\n");
			break;
		case 2:
			fprintf(stderr, "Error: Can't open file %s\n",
				va_arg(greggor, char *));
			break;
		case 3:
			numbeeeer = va_arg(greggor, int);
			opapapap = va_arg(greggor, char *);
			fprintf(stderr, "L%d: unknown instruction %s\n", numbeeeer, opapapap);
			break;
		case 4:
			fprintf(stderr, "Error: malloc failed\n");
			break;
		case 5:
			fprintf(stderr, "L%d: usage: push integer\n", va_arg(greggor, int));
			break;
		default:
			break;
	}
	free_nodes();
	exit(EXIT_FAILURE);
}


