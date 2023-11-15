#include "monty.h"
/**
 * golangsub - Dives into the stk's top two elements, attempting the daring feat of subtraction.
 * @stk: Pointer to a pointer, preparing for the mathematical acrobatics of stk subtraction.
 * @nmrliigne: Integer representing the line number, because even stacks need a touch of mathematical drama.
 */

void golangsub(stack_t **stk, unsigned int nmrliigne)
{
	int thesumm;

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)

		themoreerrors(8, nmrliigne, "sub");


	(*stk) = (*stk)->next;
	thesumm = (*stk)->n - (*stk)->prev->n;
	(*stk)->n = thesumm;
	free((*stk)->prev);
	(*stk)->prev = NULL;
}
