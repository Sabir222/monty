#include "monty.h"
/**
 * golangswp - Dares to disrupt the stk's
 * order by orchestrating a daring swap of its top two elements.
 * @stk: Pointer to a pointer,
 * witnessing the topsy-turvy dance of stk swapping.
 * @nmrliigne: Integer representing the line number,
 * because even stacks enjoy a bit of chaos.
 */

void golangswp(stack_t **stk, unsigned int nmrliigne)/**  a comment here*/
{
	stack_t *tiepo;/**  a comment here*/

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)
		themoreerrors(8, nmrliigne, "swap");/**  a comment here*/
	tiepo = (*stk)->next;
	/**  a comment here*/
	(*stk)->next = tiepo->next;/**  a comment here*/
	if (tiepo->next != NULL)
		tiepo->next->prev = *stk;
	tiepo->next = *stk;/**  a comment here*/
	(*stk)->prev = tiepo;/**  a comment here*/
	/**  a comment here*/
	tiepo->prev = NULL;
	/**  a comment here*/
	*stk = tiepo;
}
