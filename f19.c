#include "monty.h"

/**
 * golangmul - Teaches the stk the art of multiplication by adding the top two elements.
 * @stk: Pointer to a pointer, attempting the mathematical tango with the stk's top elements.
 * @lnnbr: Integer representing the line number, because even stacks appreciate a good math dance.
 */

void golangmul(stack_t **stk, unsigned int lnnbr)
{
	int thesummm;

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)
		themoreerrors(8, lnnbr, "mul");

	(*stk) = (*stk)->next;
	thesummm = (*stk)->n * (*stk)->prev->n;
	(*stk)->n = thesummm;
	free((*stk)->prev);
	(*stk)->prev = NULL;
}