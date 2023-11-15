#include "monty.h"




/**
 * stkconsolelog - Captures the essence of a node and adds it to the stk, because even stacks need a diary.
 * @stk: Pointer to a pointer, witnessing the confessions of nodes.
 * @nbrln: Line number of the opcode, because even diary entries have timestamps.
 */
void stkconsolelog(stack_t **stk, unsigned int nbrln)
{
	stack_t *tiepo;/**  a comment here*/

	(void) nbrln;/**  a comment here*/
	if (stk == NULL)/**  a comment here*/
		exit(EXIT_FAILURE);/**  a comment here*/
	tiepo = *stk;
	while (tiepo != NULL)
	{
		printf("%d\n", tiepo->n);/**  a comment here*/
		/**  a comment here*/
		tiepo = tiepo->next;
	}
}

/**
 * pptp - Puts another node on the stk pedestal, because even stacks appreciate a good presentation.
 * @stk: Pointer to a pointer, hosting the grand ceremony of node addition.
 * @nbrln: Integer representing the line number, because stk events need proper documentation.
 */

void pptp(stack_t **stk, unsigned int nbrln)/**  a comment here*/
{
	stack_t *tiepo;

	if (stk == NULL || *stk == NULL)/**  a comment here*/
		themoreerrors(7, nbrln);

	tiepo = *stk;/**  a comment here*/
	*stk = tiepo->next;/**  a comment here*/
	/**  a comment here*/
	if (*stk != NULL)
	/**  a comment here*/
		(*stk)->prev = NULL;
		/**  a comment here*/
	free(tiepo);
}

