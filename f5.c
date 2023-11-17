#include "monty.h"




/**
 * golangmod - Teaches the stk the art of
 * summation by adding the top two elements.
 * @stk: Pointer to a pointer,
 * trying to master the ancient dance of addition.
 * @lnnbr: Integer representing the line number,
 * because even stacks need to follow the rhythm of math.
 */

void golangmod(stack_t **stk, unsigned int lnnbr)/**  a comment here*/
{
	int thesummm;/**  a comment here*/

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)/**  a comment here*/

		themoreerrors(8, lnnbr, "mod");/**  a comment here*/


	if ((*stk)->n == 0)
	/**  a comment here*/
		themoreerrors(9, lnnbr);/**  a comment here*/
	(*stk) = (*stk)->next;/**  a comment here*/
	thesummm = (*stk)->n % (*stk)->prev->n;
	/**  a comment here*/
	(*stk)->n = thesummm;
	/**  a comment here*/
	free((*stk)->prev);
	/**  a comment here*/
	(*stk)->prev = NULL;
}
