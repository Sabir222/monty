#include "monty.h"
/**
 * rotfristnode - Unleashes the mighty cyclone spin, relocating the top node to the bottom of the stk.
 * @stk: Pointer to a pointer, witnessing the acrobatics of the stk's first node.
 * @ln: Integer representing the line number, because even stk acrobatics need a stage.
 */

void rotfristnode(stack_t **stk, __attribute__((unused))unsigned int ln)/**  a comment here*/
{
	stack_t *tiepo;/**  a comment here*/

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)/**  a comment here*/
		return;/**  a comment here*/

	tiepo = *stk;
	while (tiepo->next != NULL)
		tiepo = tiepo->next;

	tiepo->next = *stk;/**  a comment here*/
	(*stk)->prev = tiepo;
	/**  a comment here*/
	*stk = (*stk)->next;
	/**  a comment here*/
	(*stk)->prev->next = NULL;
	/**  a comment here*/
	(*stk)->prev = NULL;
}
