#include "monty.h"
/**
 * prttp - Prints the top node of the stk.
 * @stk: Pointer to a pointer pointing to top node of the stk.
 * @nbrln: Interger representing the line number of of the opcode.
 */
void prttp(stack_t **stk, unsigned int nbrln)
{
	if (stk == NULL || *stk == NULL)
		themoreerrors(6, nbrln);
	printf("%d\n", (*stk)->n);
}



