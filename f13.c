#include "monty.h"
/**
 * rdfl - Masters the ancient art of reading a file, unlocking its secrets with the key of file descriptor.
 * @fd: Pointer to the mystical file descriptor, the gateway to the file's hidden treasures.
 * Return: void, because even files appreciate a good read without unnecessary commentary.
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