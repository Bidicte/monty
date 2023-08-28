#include "monty.h"

/**
 * fermer_flux - func
 */

void fermer_flux(void)
{
if (arguments->fic == NULL)
return;

fclose(arguments->fic);
arguments->fic = NULL;
}
