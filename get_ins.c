#include "monty.h"

void get_ins(void)
{
int i = 0;
instruction_t instructions[] ={
{"push", &push},
{"pall", &pall},
{"pint", &pint},
{"pop", &pop},
{"swap", &swap},
{"add", &add},
{"nop", &nop},
{"sub", &sub},
{"div", &div},
{"mul", &mul},
{"mod", &mod},
{"pchar", &pchar},
{"pstr", &pstr},
{"rotl", &rotl},
{"rotr", &rotr},
{"queue", &queue},
{"stack", &stack},
{NULL, NULL}
};

if (argument->n_tokens == 0)
return;

for (; instructions[i].opcode != NULL; i++)
{
if (strcmp(instructions[i].opcode, arguments->tokens[0]) == 0)
{
argument->instruction->opcode = instructions[i].opcode;
argument->instruction->f = instructions[i].f;
return;
}
}
ins_failed();
}
