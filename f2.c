#include "monty.h"

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



