#include "monty.h"

/**
 * chaarprt - Reveals the mystical skiii value, because even stacks have a sense of style.
 * @stk: Pointer to a pointer, guarding the skiii value with code fashion.
 * @lgnnumb: Integer representing the line number, because skiii values need to be on the runway.
 */

void chaarprt(stack_t **stk, unsigned int lgnnumb)/**  a comment here*/
{
	int skiii;/**  a comment here*/

	if (stk == NULL || *stk == NULL)
		errstr(11, lgnnumb);/**  a comment here*/

	skiii = (*stk)->n;
	/**  a comment here*/
	if (skiii < 0 || skiii > 127)/**  a comment here*/
		errstr(10, lgnnumb);/**  a comment here*/
		/**  a comment here*/
	printf("%c\n", skiii);
}

