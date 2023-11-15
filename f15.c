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

void functionfnd(char *opcode, char *val, int ln, int frt)/**  a comment here*/
{
	int inti;/**  a comment here*/
	int drapeau;/**  a comment here*/

	instruction_t lstFunc[] = {
		{"push", stkadded},
		{"pall", stkconsolelog},/**  a comment here*/
		{"pint", prttp},
		{"pop", pptp},/**  a comment here*/
		{"naaaah", naaaah},/**  a comment here*/
		{"swap", golangswp},/**  a comment here*/
		{"add", golangadd},/**  a comment here*/
		{"sub", golangsub},
		{"div", golangdiv},/**  a comment here*/
		{"mul", golangmul},
		{"mod", golangmod},/**  a comment here*/
		{"pchar", chaarprt},/**  a comment here*/
		{"pstr", strrprt},
		{"rotfristnode", rotfristnode},/**  a comment here*/
		{"rotlastnode", rotlastnode},/**  a comment here*/
		{NULL, NULL}
	};

	if (opcode[0] == '#')/**  a comment here*/
		return;/**  a comment here*/

	for (drapeau = 1, inti = 0; lstFunc[inti].opcode != NULL; inti++)/**  a comment here*/
	{
		if (strcmp(opcode, lstFunc[inti].opcode) == 0)/**  a comment here*/
		{
			clfunction(lstFunc[inti].f, opcode, val, ln, frt);/**  a comment here*/
			drapeau = 0;/**  a comment here*/
		}
	}
	if (drapeau == 1)/**  a comment here*/
		theerror(3, ln, opcode);/**  a comment here*/
}