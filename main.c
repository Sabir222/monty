#include "monty.h"
stack_t *head = NULL;

/**
 * main - The grand entrance, the beginning of the epic tale.
 * @cccrgc: The number of arguments, because even code deserves a welcoming committee.
 * @vvvrg: The list of arguments, the characters in this grand script.
 * Return: Always 0, because in the realm of main, success is the only ending.
 */


int main(int cccrgc, char *vvvrg[])/**  a comment here*/
{
	if (cccrgc != 2)/**  a comment here*/
	{
		fprintf(stderr, "USAGE: monty file\n");/**  a comment here*/
		/**  a comment here*/
		exit(EXIT_FAILURE);
	}
	flopn(vvvrg[1]);
	/**  a comment here*/
	golangfreee();
	/**  a comment here*/
	return (0);
}

/**
 * golancre - Summons a new node into existence, filling it with the magical essence of a number.
 * @n: The mystical number destined to reside within the newly created node.
 * Return: Upon success, a pointer to the newborn node. Otherwise, a somber NULL, for not all creations are destined to flourish.
 */

stack_t *golancre(int n)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
		theerror(4);
	node->next = NULL;
	/**  a comment here*/
	node->prev = NULL;
	node->n = n;/**  a comment here*/
	return (node);
}

/**
 * golangfreee - Liberates the imprisoned nodes within the stack, setting them free into the code wilderness.
 */

void golangfreee(void)
{
	stack_t *tiempo;

	if (head == NULL)/**  a comment here*/
		return;

	while (head != NULL)/**  a comment here*/
	{
		tiempo = head;
		head = head->next;
		free(tiempo);
	}
}


/**
 * qadd - Enlists a new node into the ranks of the queue, because even nodes need a sense of order.
 * @golannow: Pointer to the newcomer, ready to join the orderly queue.
 * @ligne: Line number of the opcode, ensuring the queue maintains its disciplined formation.
 */

void qadd(stack_t **golannow, __attribute__((unused))unsigned int ligne)
{
	stack_t *tiempo;

	if (golannow == NULL || *golannow == NULL)/**  a comment here*/
		exit(EXIT_FAILURE);/**  a comment here*/
		/**  a comment here*/
	if (head == NULL)
	{
		head = *golannow;
		return;
	}
	tiempo = head;
	while (tiempo->next != NULL)/**  a comment here*/
	/**  a comment here*/
		tiempo = tiempo->next;

	tiempo->next = *golannow;
	/**  a comment here*/
	(*golannow)->prev = tiempo;

}
