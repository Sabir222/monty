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