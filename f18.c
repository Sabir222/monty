#include "monty.h"
/**
 * errstr - handles errors.
 * @errcd: The error codes are the following:
 * (10) ~> The number inside a node is outside ASCII bounds.
 * (11) ~> The stack is empty.
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
	free_nodes();
	exit(EXIT_FAILURE);
}
