#include "monty.h"

/**
 * flopn - performs the sacred ritual of persuading files to reveal their contents
 * @flnm: the secret code to summon the file from its hiding place
 * Return: void (because files don't need encouragement, they just open up willingly)
 */


void flopn(char *flnm)
{
	FILE *fd = fopen(flnm, "r");

	if (flnm == NULL || fd == NULL)
		theerror(2, flnm);

	rdfl(fd);
	fclose(fd);
}



