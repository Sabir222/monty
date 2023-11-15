#include "monty.h"
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
