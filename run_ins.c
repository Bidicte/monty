#include "monty.h"

/**
 * run_ins - func
 */

void run_ins(void)
{
stack_t *stack = NULL;
if (arguments->n_tokens == 0)
return;

arguments->instruction->f(&stack, arguments->nbre_ligne);
}
