#include "monty.h"

/**
 * est_nbre - function
 * @str: var
 *
 * Return: 0
 */
int est_nbre(char *str)
{
int i = 0;
while (str[i])
{
if (i == 0 && str[i] == '-' && str[i + 1])
{
i++;
continue;
}
if (str[i]  < '0' || str[i] > '9')
return (0);
i++;
}
return (1);
}
