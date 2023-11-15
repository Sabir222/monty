#include "monty.h"

/**
 * chaarprt - Prints the skiii value.
 * @stk: Pointer to a pointer pointing to top node of the stk.
 * @lgnnumb: Interger representing the line number of of the opcode.
 */
void chaarprt(stack_t **stk, unsigned int lgnnumb)
{
	int skiii;

	if (stk == NULL || *stk == NULL)
		errstr(11, lgnnumb);

	skiii = (*stk)->n;
	if (skiii < 0 || skiii > 127)
		errstr(10, lgnnumb);
	printf("%c\n", skiii);
}

/**
 * strrprt - Prints a string.
 * @stk: Pointer to a pointer pointing to top node of the stk.
 * @ln: Interger representing the line number of of the opcode.
 */
void strrprt(stack_t **stk, __attribute__((unused))unsigned int ln)
{
	int skiii;
	stack_t *tiepo;

	if (stk == NULL || *stk == NULL)
	{
		printf("\n");
		return;
	}

	tiepo = *stk;
	while (tiepo != NULL)
	{
		skiii = tiepo->n;
		if (skiii <= 0 || skiii > 127)
			break;
		printf("%c", skiii);
		tiepo = tiepo->next;
	}
	printf("\n");
}

/**
 * rotfristnode - Rotates the first node of the stk to the bottom.
 * @stk: Pointer to a pointer pointing to top node of the stk.
 * @ln: Interger representing the line number of of the opcode.
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


/**
 * rotlastnode - Rotates the last node of the stk to the top.
 * @stk: Pointer to a pointer pointing to top node of the stk.
 * @ln: Interger representing the line number of of the opcode.
 */
void rotlastnode(stack_t **stk, __attribute__((unused))unsigned int ln)
{
	stack_t *tiepo;

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)
		return;

	tiepo = *stk;

	while (tiepo->next != NULL)
		tiepo = tiepo->next;

	tiepo->next = *stk;
	tiepo->prev->next = NULL;
	tiepo->prev = NULL;
	(*stk)->prev = tiepo;
	(*stk) = tiepo;
}
