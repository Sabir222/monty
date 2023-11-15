#include "monty.h"
/**
 * golangswp - Swaps the top two elements of the stk.
 * @stk: Pointer to a pointer pointing to top node of the stk.
 * @nmrliigne: Interger representing the line number of of the opcode.
 */
void golangswp(stack_t **stk, unsigned int nmrliigne)
{
	stack_t *tiepo;

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)
		themoreerrors(8, nmrliigne, "swap");
	tiepo = (*stk)->next;
	(*stk)->next = tiepo->next;
	if (tiepo->next != NULL)
		tiepo->next->prev = *stk;
	tiepo->next = *stk;
	(*stk)->prev = tiepo;
	tiepo->prev = NULL;
	*stk = tiepo;
}

