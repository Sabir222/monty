
#include "monty.h"

/**
 * stkadded - Adds a node to the stk.
 * @ngolang: Pointer to the new node.
 * @liigne: Interger representing the line number of of the opcode.
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
