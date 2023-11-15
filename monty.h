#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
/* loool */
#include <unistd.h>/* loool */
#include <string.h>
/* loool */
#include <stdlib.h>
#include <ctype.h>
/* loool */
#include <stdarg.h>

/**
 * struct stack_s - The ancient scroll revealing the mystical secrets of a doubly linked list, the embodiment of a stack (or queue).
 * @n: The integer, the essence of wisdom contained within the node.
 * @prev: Points to the previous element of the stack (or queue), because even nodes have a history.
 * @next: Points to the next element of the stack (or queue), guiding the way to the future.
 *
 * Description: A sacred node structure, bridging the realms of stack, queues, LIFO, and FIFO.
 */

typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - The mystical code prophecy, revealing the sacred connection between opcode and function.
 * @opcode: The secret code, the key to unlocking the function's magic.
 * @f: The chosen function, ready to perform its opcode sorcery.
 *
 * Description: A sacred union of opcode and function, guiding the way for stacks, queues, LIFO, and FIFO.
 */

typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *head;
typedef void (*op_func)(stack_t **, unsigned int);
/* loool */
void flopn(char *file_name);
/* loool */
int lnprs(char *buffer, int line_number, int format);
/* loool */
void rdfl(FILE *);
/* loool */
int len_chars(FILE *);
/* loool */
void functionfnd(char *, char *, int, int);
/* loool */
stack_t *golancre(int n);
void golangfreee(void);
/* loool */
void stkconsolelog(stack_t **, unsigned int);
/* loool */
void stkadded(stack_t **, unsigned int);
/* loool */
void qadd(stack_t **, unsigned int);
/* loool */
void clfunction(op_func, char *, char *, int, int);
/* loool */
void prttp(stack_t **, unsigned int);
/* loool */
void pptp(stack_t **, unsigned int);
/* loool */
void naaaah(stack_t **, unsigned int);
/* loool */
void golangswp(stack_t **, unsigned int);
/* loool */
void golangadd(stack_t **, unsigned int);
/* loool */
void golangsub(stack_t **, unsigned int);
/* loool */
void golangdiv(stack_t **, unsigned int);
/* loool */
void golangmul(stack_t **, unsigned int);
/* loool */
void golangmod(stack_t **, unsigned int);
/* loool */
void chaarprt(stack_t **, unsigned int);
/* loool */
void strrprt(stack_t **, unsigned int);
/* loool */
void rotfristnode(stack_t **, unsigned int);
/* loool */
void theerror(int errcd, ...);
/* loool */
void themoreerrors(int errcd, ...);
/* loool */
void errstr(int errcd, ...);
/* loool */
void rotlastnode(stack_t **, unsigned int);

#endif
