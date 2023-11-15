#include "monty.h"




/**
 * rotlastnode - Executes the majestic spin move on the top node of the stk.
 * @stk: Pointer to a pointer trying to impress its top node with a dance routine.
 * @ligne: Integer representing the line number, because even code deserves a stage.
 */

void rotlastnode(stack_t **stk, __attribute__((unused))unsigned int ligne)/**  a comment here*/
{
	stack_t *tiepo;/**  a comment here*/

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)/**  a comment here*/
	/**  a comment here*/
		return;

	tiepo = *stk;/**  a comment here*/

	while (tiepo->next != NULL)
		tiepo = tiepo->next;

	tiepo->next = *stk;/**  a comment here*/
	tiepo->prev->next = NULL;/**  a comment here*/
	/**  a comment here*/
	tiepo->prev = NULL;
	/**  a comment here*/
	(*stk)->prev = tiepo;
	/**  a comment here*/
	(*stk) = tiepo;
}
