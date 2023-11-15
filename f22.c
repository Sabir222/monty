#include "monty.h"
/**
 * themoreerrors - Juggles errors like a pro, because even errors need a bit of showmanship.
 * @errcd: The error codes and their dramatic entrances:
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
	golangfreee();
	exit(EXIT_FAILURE);
}
