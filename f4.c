#include "monty.h"

/**
 * naaaah - Does nothing.
 * @stk: Pointer to a pointer pointing to top node of the stk.
 * @nmrliigne: Interger representing the line number of of the opcode.
 */
void naaaah(stack_t **stk, unsigned int nmrliigne)
{
	(void)stk;
	(void)nmrliigne;
}







/**
 * golangdiv - Adds the top two elements of the stk.
 * @stk: Pointer to a pointer pointing to top node of the stk.
 * @nmrliigne: Interger representing the line number of of the opcode.
 */
void golangdiv(stack_t **stk, unsigned int nmrliigne)
{
	int thesumm;

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)
		themoreerrors(8, nmrliigne, "div");

	if ((*stk)->n == 0)
		themoreerrors(9, nmrliigne);
	(*stk) = (*stk)->next;
	thesumm = (*stk)->n / (*stk)->prev->n;
	(*stk)->n = thesumm;
	free((*stk)->prev);
	(*stk)->prev = NULL;
}

/**
 * golangsub - Adds the top two elements of the stk.
 * @stk: Pointer to a pointer pointing to top node of the stk.
 * @nmrliigne: Interger representing the line number of of the opcode.
 */
void golangsub(stack_t **stk, unsigned int nmrliigne)
{
	int thesumm;

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)

		themoreerrors(8, nmrliigne, "sub");


	(*stk) = (*stk)->next;
	thesumm = (*stk)->n - (*stk)->prev->n;
	(*stk)->n = thesumm;
	free((*stk)->prev);
	(*stk)->prev = NULL;
}
