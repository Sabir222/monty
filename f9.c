
#include "monty.h"

/**
 * stkadded - Welcomes a new member to the stk family.
 * @ngolang: Pointer to the newcomer, ready to join the stk squad.
 * @liigne: Integer representing the line number, because even nodes need a sense of direction.
 */

void stkadded(stack_t **ngolang, __attribute__((unused))unsigned int liigne)
{
	stack_t *tiepo;

	if (ngolang == NULL || *ngolang == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *ngolang;
		return;
	}
	tiepo = head;
	head = *ngolang;
	head->next = tiepo;
	tiepo->prev = head;
}
