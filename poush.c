#include "monty.h"

/**
 * push - function push
 * @stack: var 1
 * @compt: var 2
 */
void push(stack_t **head, unsigned int compt)
{
if (arguments->n_tokens <= 1 || !(est_nbre(arguments->tokens[1]))){
free_args();
dprintf(2, "L%d: usage: push integer\n", compt);
exit(EXIT_FAILURE);
}
*stack = malloc(sizeof(stack_t));
if (*stack == NULL)
malloc_failure();
(*stack)->next = (*stack)->prev = NULL;
(*stack)->n = (int) atoi(arguments->tokens[1]);
if (arguments->head != NULL)
{
(*stack)->next = arguments->head;
arguments->head->prev = *stack;
}
arguments->head = *stack;
arguments->stack->taille = += 1;
}
