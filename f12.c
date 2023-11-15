#include "monty.h"
/**
 * golangadd - Adds the top two elements of the stk.
 * @stk: Pointer to a pointer pointing to top node of the stk.
 * @nmrliigne: Interger representing the line number of of the opcode.
 */
void golangadd(stack_t **stk, unsigned int nmrliigne)
{
	int thesumm;

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)
		themoreerrors(8, nmrliigne, "add");

	(*stk) = (*stk)->next;
	thesumm = (*stk)->n + (*stk)->prev->n;
	(*stk)->n = thesumm;
	free((*stk)->prev);
	(*stk)->prev = NULL;
}