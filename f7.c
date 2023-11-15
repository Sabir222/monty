#include "monty.h"
/**
 * prttp - Unveils the mysterious contents of the top node from the stk.
 * @stk: Pointer to a pointer trying to keep its top node's secrets.
 * @nbrln: Integer representing the line number, because even the top node deserves the spotlight.
 */

void prttp(stack_t **stk, unsigned int nbrln)
{
	if (stk == NULL || *stk == NULL)
		themoreerrors(6, nbrln);
	printf("%d\n", (*stk)->n);
}



