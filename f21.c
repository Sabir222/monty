#include "monty.h"
/**
 * rotfristnode - Unleashes the mighty cyclone spin, relocating the top node to the bottom of the stk.
 * @stk: Pointer to a pointer, witnessing the acrobatics of the stk's first node.
 * @ln: Integer representing the line number, because even stk acrobatics need a stage.
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
