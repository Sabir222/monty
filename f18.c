#include "monty.h"
/**
 * errstr - Masters the delicate art of error handling, turning mishaps into a symphony of chaos.
 * @errcd: The error codes and their dramatic entries:
 * (10) ~> When a node reveals a number beyond the mystical ASCII boundaries.
 * (11) ~> When the stack experiences an existential crisis and turns into a void of emptiness.
 */

void errstr(int errcd, ...)
{
	va_list greggor;
	int numbeeeer;

	va_start(greggor, errcd);
	numbeeeer = va_arg(greggor, int);
	switch (errcd)
	{
		case 10:
			fprintf(stderr, "L%d: can't pchar, value out of range\n", numbeeeer);
			break;
		case 11:
			fprintf(stderr, "L%d: can't pchar, stack empty\n", numbeeeer);
			break;
		default:
			break;
	}
	golangfreee();
	exit(EXIT_FAILURE);
}
