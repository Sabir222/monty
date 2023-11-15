#include "monty.h"

/**
 * chaarprt - Prints the skiii value.
 * @stk: Pointer to a pointer pointing to top node of the stk.
 * @lgnnumb: Interger representing the line number of of the opcode.
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

