#include "monty.h"
/**
 * rdfl - Masters the ancient art of reading a file, unlocking its secrets with the key of file descriptor.
 * @fd: Pointer to the mystical file descriptor, the gateway to the file's hidden treasures.
 * Return: void, because even files appreciate a good read without unnecessary commentary.
 */


void rdfl(FILE *fd)/**  a comment here*/
{
	int nbrln, frt = 0;/**  a comment here*/
	/**  a comment here*/
	char *bfr = NULL;
	/**  a comment here*/
	size_t len = 0;/**  a comment here*/

	for (nbrln = 1; getline(&bfr, &len, fd) != -1; nbrln++)/**  a comment here*/
	{
		frt = lnprs(bfr, nbrln, frt);/**  a comment here*/
	}
	free(bfr);/**  a comment here*/
}