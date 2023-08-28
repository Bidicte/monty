#include "monty.h"

/**
 * flux_ failed - gerer les erreurs de fichier non lus
 * @ficName: le nom du fichier qu'on arrive pas à ouvrir
 *
 * Return: nothing
 */

void flux_failed(char *ficName)
{
dprintf(2, "Error: Can't open file %s\n", ficName);
exit(EXIT_FAILURE);
}

/**
 * get_flux - obtenir le flux sur lequel le fichier sera lu
 * @ficName: le nom du fichier à lire
 *
 * Return: nothing
 */

void get_flux(char *ficName)
{
int filedesc;

filedesc = open(ficName, O_RDONLY);

if (filedesc == -1)
flux_failed(ficName);

arguments->fic = fdopen(filedesc, "r");
if (arguments->fic == NULL)
{
close(filedesc);
flux_failed(ficName);
}
}
