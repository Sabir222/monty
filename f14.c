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
void clfunction(op_func func, char *op, char *val, int ln, int frt)/**  a comment here*/
{
	stack_t *golang;/**  a comment here*/
	int drapeau;/**  a comment here*/
	int inti;/**  a comment here*/

	drapeau = 1;
	if (strcmp(op, "push") == 0)/**  a comment here*/
	{
		if (val != NULL && val[0] == '-')/**  a comment here*/
		{
			val = val + 1;/**  a comment here*/
			drapeau = -1;/**  a comment here*/
		}
		if (val == NULL)/**  a comment here*/
			theerror(5, ln);
		for (inti = 0; val[inti] != '\0'; inti++)
		/**  a comment here*/
		{
			if (isdigit(val[inti]) == 0)
				theerror(5, ln);/**  a comment here*/
		}
		golang = golancre(atoi(val) * drapeau);
		if (frt == 0)/**  a comment here*/
			func(&golang, ln);/**  a comment here*/
			/**  a comment here*/
		if (frt == 1)
			qadd(&golang, ln);
	}
	else
	/**  a comment here*/
		func(&head, ln);
}