#include "monty.h"




/**
 * rotlastnode - Executes the majestic spin move on the top node of the stk.
 * @stk: Pointer to a pointer trying to impress its top node with a dance routine.
 * @ligne: Integer representing the line number, because even code deserves a stage.
 */

void rotlastnode(stack_t **stk, __attribute__((unused))unsigned int ligne)
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
