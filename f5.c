#include "monty.h"




/**
 * golangmod - Teaches the stk the art of summation by adding the top two elements.
 * @stk: Pointer to a pointer, trying to master the ancient dance of addition.
 * @lnnbr: Integer representing the line number, because even stacks need to follow the rhythm of math.
 */

void golangmod(stack_t **stk, unsigned int lnnbr)
{
	int thesummm;

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)

		themoreerrors(8, lnnbr, "mod");


	if ((*stk)->n == 0)
		themoreerrors(9, lnnbr);
	(*stk) = (*stk)->next;
	thesummm = (*stk)->n % (*stk)->prev->n;
	(*stk)->n = thesummm;
	free((*stk)->prev);
	(*stk)->prev = NULL;
}
