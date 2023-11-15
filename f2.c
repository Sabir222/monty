#include "monty.h"



/**
 * rdfl - reads a file
 * @fd: pointer to file descriptor
 * Return: void
 */

void rdfl(FILE *fd)
{
	int nbrln, frt = 0;
	char *bfr = NULL;
	size_t len = 0;

	for (nbrln = 1; getline(&bfr, &len, fd) != -1; nbrln++)
	{
		frt = lnprs(bfr, nbrln, frt);
	}
	free(bfr);
}

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






/**
 * flopn - opens a file
 * @flnm: the file namepath
 * Return: void
 */

void flopn(char *flnm)
{
	FILE *fd = fopen(flnm, "r");

	if (flnm == NULL || fd == NULL)
		theerror(2, flnm);

	rdfl(fd);
	fclose(fd);
}


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


