#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>


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


/** struct flux_s - contenir les variables
 * @fic: fichier qui connect le flux au fichier
 * @ligne: chaine qui sera la ligne de texte lu depuis le flux
 *
 * Description: contenir les variables depuis un flux de
 * fichiers
 */

typedef struct flux_s
{
  FILE *fic;
  char *ligne;
} flux_t;

extern flux_t *arguments;

/** natives functions */
void validate_args(int argc);
void init_args(void);
void malloc_failure(void);
void flux_failed(char *ficName);
void get_flux(char *ficName);

FILE *fdopen(int fd, const char *mode);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
int dprintf(int fd, const char *format, ...);

#endif
