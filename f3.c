#include "monty.h"




/**
 * stkconsolelog - Captures the essence of a node and adds it to the stk, because even stacks need a diary.
 * @stk: Pointer to a pointer, witnessing the confessions of nodes.
 * @nbrln: Line number of the opcode, because even diary entries have timestamps.
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
 * pptp - Puts another node on the stk pedestal, because even stacks appreciate a good presentation.
 * @stk: Pointer to a pointer, hosting the grand ceremony of node addition.
 * @nbrln: Integer representing the line number, because stk events need proper documentation.
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

