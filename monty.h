#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *head;
typedef void (*op_func)(stack_t **, unsigned int);

/*file operations*/
void flopn(char *file_name);
int lnprs(char *buffer, int line_number, int format);
void rdfl(FILE *);
int len_chars(FILE *);
void functionfnd(char *, char *, int, int);

/*Stack operations*/
stack_t *create_node(int n);
void free_nodes(void);
void stkconsolelog(stack_t **, unsigned int);
void stkadded(stack_t **, unsigned int);
void add_to_queue(stack_t **, unsigned int);

void clfunction(op_func, char *, char *, int, int);

void prttp(stack_t **, unsigned int);
void pptp(stack_t **, unsigned int);
void naaaah(stack_t **, unsigned int);
void golangswp(stack_t **, unsigned int);

/*Math operations with nodes*/
void golangadd(stack_t **, unsigned int);
void golangsub(stack_t **, unsigned int);
void golangdiv(stack_t **, unsigned int);
void golangmul(stack_t **, unsigned int);
void golangmod(stack_t **, unsigned int);

/*String operations*/
void chaarprt(stack_t **, unsigned int);
void strrprt(stack_t **, unsigned int);
void rotfristnode(stack_t **, unsigned int);

/*Error hanlding*/
void theerror(int error_code, ...);
void themoreerrors(int error_code, ...);
void errstr(int error_code, ...);
void rotlastnode(stack_t **, unsigned int);

#endif
