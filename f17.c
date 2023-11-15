#include "monty.h"
/**
 * golangsub - Dives into the stk's top two elements, attempting the daring feat of subtraction.
 * @stk: Pointer to a pointer, preparing for the mathematical acrobatics of stk subtraction.
 * @nmrliigne: Integer representing the line number, because even stacks need a touch of mathematical drama.
 */

void golangsub(stack_t **stk, unsigned int nmrliigne)/**  a comment here*/
{
	int thesumm;/**  a comment here*/

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)/**  a comment here*/

		themoreerrors(8, nmrliigne, "sub");/**  a comment here*/


	(*stk) = (*stk)->next;
	/**  a comment here*/
	thesumm = (*stk)->n - (*stk)->prev->n;
	/**  a comment here*/
	(*stk)->n = thesumm;
	/**  a comment here*/
	free((*stk)->prev);
	/**  a comment here*/
	(*stk)->prev = NULL;
}
