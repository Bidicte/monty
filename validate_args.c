#include "monty.h"

/**
 * validate_arsg - verifier le nbre d'aliments en ligne de cmd
 * @argc: le nombre d'args en cmd
 */

void validate_args(int argc)
{
if (argc == 2)
return;

dprintf(2,"USAGE: monty file\n");
exit(EXIT_FAILURE);
}
