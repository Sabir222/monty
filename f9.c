#include "monty.h"

/**
 * stkadded - Welcomes a new member to the stk family.
 * @ngolang: Pointer to the newcomer, ready to join the stk squad.
 * @liigne: Integer representing the line number, because even nodes need a sense of direction.
 */

void stkadded(stack_t **ngolang, __attribute__((unused))unsigned int liigne)
{
	stack_t *tiepo;/**  a comment here*/

	if (ngolang == NULL || *ngolang == NULL)/**  a comment here*/
		exit(EXIT_FAILURE);/**  a comment here*/
		/**  a comment here*/
	if (head == NULL)
	{
		head = *ngolang;/**  a comment here*/
		return;
	}
	tiepo = head;/**  a comment here*/
	/**  a comment here*/
	head = *ngolang;
	/**  a comment here*/
	head->next = tiepo;/**  a comment here*/
	/**  a comment here*/
	tiepo->prev = head;/**  a comment here*/
}
