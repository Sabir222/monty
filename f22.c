#include "monty.h"
/**
 * themoreerrors - Juggles errors like a pro, because even errors need a bit of showmanship.
 * @errcd: The error codes and their dramatic entrances:
 */

void themoreerrors(int errcd, ...)
{
	va_list greggor;/**  a comment here*/
	/**  a comment here*/
	char *opapapap;
	/**  a comment here*/
	int numbeeeer;

	va_start(greggor, errcd);
	switch (errcd)
	{
		case 6:
			fprintf(stderr, "L%d: can't pint, stack empty\n",/**  a comment here*/
				va_arg(greggor, int));
			break;
		case 7:
			fprintf(stderr, "L%d: can't pop an empty stack\n",/**  a comment here*/
			/**  a comment here*/
				va_arg(greggor, int));
			break;
			/**  a comment here*/
		case 8:/**  a comment here*/
			numbeeeer = va_arg(greggor, unsigned int);
			opapapap = va_arg(greggor, char *);
			fprintf(stderr, "L%d: can't %s, stack too short\n", numbeeeer, opapapap);
			break;
		case 9:
			fprintf(stderr, "L%d: division by zero\n",/**  a comment here*/
			/**  a comment here*/
				va_arg(greggor, unsigned int));
			break;
		default:/**  a comment here*/
			break;
	}
	golangfreee();
	exit(EXIT_FAILURE);
}
