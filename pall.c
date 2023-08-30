#include "monty.h"

/**
 * pall - function
 * @stack: var
 * @compt: var
 */
void pall(stack_t **stack, unsigned int compt)
{
stack_t *tmp;
if (arguments->head == NULL)
return;
tmp = arguments->head;
while (tmp != NULL)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
}
}
