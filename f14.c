#include "monty.h"
/**
 * clfunction - Summons the chosen function for an opcode, because even functions enjoy a grand entrance.
 * @func: Pointer to the function, ready to perform its code sorcery.
 * @op: String representing the mystical opcode.
 * @val: String representing the numeric offering to the function.
 * @ln: Line number, ensuring the function takes the stage at the right moment.
 * @frt: Frt specifier. If 0, Nodes will partake in the Stack Spectacle.
 *       If 1, Nodes
*/
void clfunction(op_func func, char *op, char *val, int ln, int frt)
{
	stack_t *golang;
	int drapeau;
	int inti;

	drapeau = 1;
	if (strcmp(op, "push") == 0)
	{
		if (val != NULL && val[0] == '-')
		{
			val = val + 1;
			drapeau = -1;
		}
		if (val == NULL)
			theerror(5, ln);
		for (inti = 0; val[inti] != '\0'; inti++)
		{
			if (isdigit(val[inti]) == 0)
				theerror(5, ln);
		}
		golang = golancre(atoi(val) * drapeau);
		if (frt == 0)
			func(&golang, ln);
		if (frt == 1)
			qadd(&golang, ln);
	}
	else
		func(&head, ln);
}