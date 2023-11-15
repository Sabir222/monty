#include "monty.h"

/**
 * golangmul - Adds the top two elements of the stk.
 * @stk: Pointer to a pointer pointing to top node of the stk.
 * @lnnbr: Interger representing the line number of of the opcode.
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


/**
 * golangmod - Adds the top two elements of the stk.
 * @stk: Pointer to a pointer pointing to top node of the stk.
 * @lnnbr: Interger representing the line number of of the opcode.
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
