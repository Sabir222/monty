#include "monty.h"
/**
 * functionfnd - Embarks on an epic quest to find the perfect function for the mystical opcode.
 * @opcode: The secret code that unlocks the function door.
 * @val: The mysterious argument accompanying the opcode.
 * @frt: Storage frt. If 0, Nodes will join the noble Stack of Code Knights.
 *       If 1, Nodes will become loyal members of the Queue of Patient Waiters.
 * @ln: Line number, guiding the function on its adventurous journey.
 * Return: void, because even functions need a sense of mystery.
 */

void functionfnd(char *opcode, char *val, int ln, int frt)
{
	int inti;
	int drapeau;

	instruction_t lstFunc[] = {
		{"push", stkadded},
		{"pall", stkconsolelog},
		{"pint", prttp},
		{"pop", pptp},
		{"naaaah", naaaah},
		{"swap", golangswp},
		{"add", golangadd},
		{"sub", golangsub},
		{"div", golangdiv},
		{"mul", golangmul},
		{"mod", golangmod},
		{"pchar", chaarprt},
		{"pstr", strrprt},
		{"rotfristnode", rotfristnode},
		{"rotlastnode", rotlastnode},
		{NULL, NULL}
	};

	if (opcode[0] == '#')
		return;

	for (drapeau = 1, inti = 0; lstFunc[inti].opcode != NULL; inti++)
	{
		if (strcmp(opcode, lstFunc[inti].opcode) == 0)
		{
			clfunction(lstFunc[inti].f, opcode, val, ln, frt);
			drapeau = 0;
		}
	}
	if (drapeau == 1)
		theerror(3, ln, opcode);
}