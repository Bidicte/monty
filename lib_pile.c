#include "monty.h"

/**
 * free_stack - frees a doubly linked list
 * @head: head of the stack
 */
void free_stack(stack_t *tete)
{
stack_t *aux;

aux = tete;
while (tete)
{
aux = tete->next;
free(tete);
tete = aux;
}
}
