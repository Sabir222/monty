#include "monty.h"



/**
 * lnprs - Separates each line into tokens to determine
 * which function to call
 * @bfr: line from the file
 * @nbrln: line number
 * @frt:  storage frt. If 0 Nodes will be entered as a stack.
 * if 1 nodes will be entered as a queue.
 * Return: Returns 0 if the opcode is stack. 1 if queue.
 */

int lnprs(char *bfr, int nbrln, int frt)
{
	char *opcode, *val;
	const char *delimeter = "\n ";

	if (bfr == NULL)
		theerror(4);

	opcode = strtok(bfr, delimeter);
	if (opcode == NULL)
		return (frt);
	val = strtok(NULL, delimeter);

	if (strcmp(opcode, "stack") == 0)
		return (0);
	if (strcmp(opcode, "queue") == 0)
		return (1);

	functionfnd(opcode, val, nbrln, frt);
	return (frt);
}