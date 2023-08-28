#include "monty.h"

/**
 * ins_failed - gere les instructions inconnues
 */
void ins_failed(void)
{
dprintf(2, "L%d: unknown instruction %s\n", arguments->nbre_ligne, arguments->tokens[0]);

fermer_flux();
free_tokens();
free_args();
exit(EXIT_FAILURE);
}
