#include "monty.h"
/**
 * golangadd - Guides the stk through the harmonious dance of addition, uniting the top two elements.
 * @stk: Pointer to a pointer, orchestrating the mathematical symphony of stk addition.
 * @nmrliigne: Integer representing the line number, because even stacks need a touch of mathematical harmony.
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
