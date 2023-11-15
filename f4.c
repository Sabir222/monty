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
 * golangswp - Swaps the top two elements of the stk.
 * @stk: Pointer to a pointer pointing to top node of the stk.
 * @nmrliigne: Interger representing the line number of of the opcode.
 */
void golangswp(stack_t **stk, unsigned int nmrliigne)
{
	stack_t *tiepo;

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)
		themoreerrors(8, nmrliigne, "swap");
	tiepo = (*stk)->next;
	(*stk)->next = tiepo->next;
	if (tiepo->next != NULL)
		tiepo->next->prev = *stk;
	tiepo->next = *stk;
	(*stk)->prev = tiepo;
	tiepo->prev = NULL;
	*stk = tiepo;
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
