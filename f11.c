#include "monty.h"
/**
 * golangswp - Dares to disrupt the stk's order by orchestrating a daring swap of its top two elements.
 * @stk: Pointer to a pointer, witnessing the topsy-turvy dance of stk swapping.
 * @nmrliigne: Integer representing the line number, because even stacks enjoy a bit of chaos.
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

