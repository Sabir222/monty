#include "monty.h"
/**
 * strrprt - Unveils the mystical incantations of a string held within the stk.
 * @stk: Pointer to a pointer, guarding the ancient words of the stk's string magic.
 * @ln: Integer representing the line number, because even strings deserve a moment in the spotlight.
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
