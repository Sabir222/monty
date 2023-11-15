#include "monty.h"


/**
 * lnprs - Decodes the secret language of lines, unleashing the power of code sorcery.
 * @bfr: Line from the mystical script, filled with incantations and opcode whispers.
 * @nbrln: Line number, because even wizards need to keep track of their spells.
 * @frt: Storage frt. If 0, Nodes will be enrolled in the Stack of Mystical Knowledge.
 *       If 1, Nodes will be enrolled in the Queue of Endless Waiting.
 * Return: Returns 0 if the opcode is stack; 1 if it's a queue, because queues stand in orderly lines.
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