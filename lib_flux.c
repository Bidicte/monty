#include "monty.h"

/**
 * lib_flux - func
 */
void lib_flux(void)
{
if (arguments->fic == NULL)
return;

fclose(arguments->fic);
arguments->fic = NULL;
}
