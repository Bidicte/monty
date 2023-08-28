#include <stdio.h>
#include "monty.h"

/**
 * malloc_failure - gerer l'erreur quand l'allocation echoue
 *
 * Return: nothing
 */

void malloc_failure(void)
{
dprintf(2, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
