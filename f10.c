#include "monty.h"




/**
 * rotlastnode - Rotates the last node of the stk to the top.
 * @stk: Pointer to a pointer pointing to top node of the stk.
 * @ln: Interger representing the line number of of the opcode.
 */
void rotlastnode(stack_t **stk, __attribute__((unused))unsigned int ln)
{
	stack_t *tiepo;

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)
		return;

	tiepo = *stk;

	while (tiepo->next != NULL)
		tiepo = tiepo->next;

	tiepo->next = *stk;
	tiepo->prev->next = NULL;
	tiepo->prev = NULL;
	(*stk)->prev = tiepo;
	(*stk) = tiepo;
}