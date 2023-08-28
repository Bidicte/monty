#include "monty.h"

/**
 * init_args - init un ptr à la struc args_s
 *
 * Return: nothing
 */

void init_args(void)
{
arguments = malloc(sizeof(flux_t));

if (arguments == NULL)
malloc_failure();

arguments->fic = NULL;
arguments->ligne = NULL;
}

