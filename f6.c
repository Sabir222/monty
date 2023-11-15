#include "monty.h"

/**
 * chaarprt - Reveals the mystical skiii value, because even stacks have a sense of style.
 * @stk: Pointer to a pointer, guarding the skiii value with code fashion.
 * @lgnnumb: Integer representing the line number, because skiii values need to be on the runway.
 */

void chaarprt(stack_t **stk, unsigned int lgnnumb)
{
	int skiii;

	if (stk == NULL || *stk == NULL)
		errstr(11, lgnnumb);

	skiii = (*stk)->n;
	if (skiii < 0 || skiii > 127)
		errstr(10, lgnnumb);
	printf("%c\n", skiii);
}

