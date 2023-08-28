#include "monty.h"

/**
 * tokens - delimiter les lignes
 */
void tokens(void)
{
  int i = 0;
  char *del = "\n";
  char *token = NULL;
  char *ligne_cpy = NULL;

ligne_cpy = malloc(sizeof(char) * (strlen(arguments->ligne) + 1));
strcpy(ligne_cpy, arguments->ligne);
arguments->n_tokens = 0;
token = strtok(ligne_cpy, del);
while (token)
{
arguments->n_tokens += 1;
token = strtok(NULL, del);
}
arguments->tokens = malloc(sizeof(char *) * (arguments->n_tokens + 1));
strcpy(ligne_cpy, arguments->ligne);
token = strtok(ligne_cpy, del);
while (token)
{
arguments->tokens[i] = malloc(sizeof(char) * (strlen(token) + 1));
if (arguments->tokens[i] == NULL)
malloc_failure();
strcpy(arguments->tokens[i], token);
token = strtok(NULL, del);
i++;
}
arguments->tokens[i] = NULL;
free(ligne_cpy);
}
