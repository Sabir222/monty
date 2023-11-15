#include "monty.h"
/**
 * clfunction - Calls the required function.
 * @func: Pointer to the function that is about to be called.
 * @op: string representing the opcode.
 * @val: string representing a numeric val.
 * @ln: line numeber for the instruction.
 * @frt: frt specifier. If 0 Nodes will be entered as a stack.
 * if 1 nodes will be entered as a queue.
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
		golang = create_node(atoi(val) * drapeau);
		if (frt == 0)
			func(&golang, ln);
		if (frt == 1)
			add_to_queue(&golang, ln);
	}
	else
		func(&head, ln);
}