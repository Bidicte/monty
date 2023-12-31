#include "monty.h"

flux_t *arguments = NULL;

/**
 * main - the main function, entry point
 * @argc: le nbre d'args en cmd
 * @argv: un pointeur vers un tableau contenant la liste des args
 *
 * Return: 0 ou 1.
 */
int main(int argc, char **argv)
{
size_t n = 0;
validate_args(argc);
init_args();
get_flux(argv[1]);

while (getline(&arguments->ligne, &n, arguments->fic) != -1)
{
  arguments->nbre_ligne += 1;
  tokens();
  get_ins();
  run_ins();
  free_tokens();
}
fermer_flux();
free_args();

return (0);
}
