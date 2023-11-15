#include "monty.h"
/**
 * functionfnd - find the appropriate function for the opcode
 * @opcode: opcode
 * @val: argument of opcode
 * @frt:  storage frt. If 0 Nodes will be entered as a stack.
 * @ln: line number
 * if 1 nodes will be entered as a queue.
 * Return: void
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