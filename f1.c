#include "monty.h"

/**
 * theerror - Deciphers the cosmic code of errors and translates them into appropriately amusing messages.
 * @errcd: The mysterious error codes and their hidden meanings:
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
	golangfreee();
	exit(EXIT_FAILURE);
}


