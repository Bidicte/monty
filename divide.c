#include "monty.h"

/**
 * divide - divides the top two elements of the stack.
 * @tete: tete de la pile
 * @count: nombre de lignes
 * Return: void
 */

void divide(stack_t **tete, unsigned int count)
{
stack_t *h;
int taille = 0, aux;

h = *tete;
while (h)
{
h = h->next;
taille++;
}
if (taille < 2)
{
fprintf(stderr, "L%d: can't div, stack too short\n", count);
fclose(bus.file);
free(bus.content);
free_stack(*tete);
exit(EXIT_FAILURE);
}
h = *tete;
if (h->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", count);
fclose(bus.file);
free(bus.content);
free_stack(*tete);
exit(EXIT_FAILURE);
}
aux = h->next->n / h->n;
h->next->n = aux;
*tete = h->next;
free(h);
}
