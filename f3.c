#include "monty.h"




/**
 * stkconsolelog - Adds a node to the stk.
 * @stk: Pointer to a pointer pointing to top node of the stk.
 * @nbrln: line number of  the opcode.
 */
void stkconsolelog(stack_t **stk, unsigned int nbrln)
{
	stack_t *tiepo;

	(void) nbrln;
	if (stk == NULL)
		exit(EXIT_FAILURE);
	tiepo = *stk;
	while (tiepo != NULL)
	{
		printf("%d\n", tiepo->n);
		tiepo = tiepo->next;
	}
}

/**
 * pptp - Adds a node to the stk.
 * @stk: Pointer to a pointer pointing to top node of the stk.
 * @nbrln: Interger representing the line number of of the opcode.
 */
void pptp(stack_t **stk, unsigned int nbrln)
{
	stack_t *tiepo;

	if (stk == NULL || *stk == NULL)
		themoreerrors(7, nbrln);

	tiepo = *stk;
	*stk = tiepo->next;
	if (*stk != NULL)
		(*stk)->prev = NULL;
	free(tiepo);
}

