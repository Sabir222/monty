#include "monty.h"
/**
 * golangdiv - Initiates the stk in the sacred ritual of division by tackling the top two elements.
 * @stk: Pointer to a pointer, navigating the mathematical maze of stk division.
 * @nmrliigne: Integer representing the line number, because even stacks need a taste of mathematical daring.
 */

void golangdiv(stack_t **stk, unsigned int nmrliigne)
{
	int thesumm;

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)
		themoreerrors(8, nmrliigne, "div");

	if ((*stk)->n == 0)
		themoreerrors(9, nmrliigne);
	(*stk) = (*stk)->next;
	thesumm = (*stk)->n / (*stk)->prev->n;
	(*stk)->n = thesumm;
	free((*stk)->prev);
	(*stk)->prev = NULL;
}
