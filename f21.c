#include "monty.h"
/**
 * rotfristnode - Rotates the first node of the stk to the bottom.
 * @stk: Pointer to a pointer pointing to top node of the stk.
 * @ln: Interger representing the line number of of the opcode.
 */
void rotfristnode(stack_t **stk, __attribute__((unused))unsigned int ln)
{
	stack_t *tiepo;

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)
		return;

	tiepo = *stk;
	while (tiepo->next != NULL)
		tiepo = tiepo->next;

	tiepo->next = *stk;
	(*stk)->prev = tiepo;
	*stk = (*stk)->next;
	(*stk)->prev->next = NULL;
	(*stk)->prev = NULL;
}
