#include "monty.h"

void get_ins(void)
{
int i = 0;
instruction_t instructions[] ={
{"push", &push},
{"pall", &pall},
{NULL, NULL}
};

if (arguments->n_tokens == 0)
return;

for (; instructions[i].opcode != NULL; i++)
{
if (strcmp(instructions[i].opcode, arguments->tokens[0]) == 0)
{
arguments->instruction->opcode = instructions[i].opcode;
arguments->instruction->f = instructions[i].f;
return;
}
}
ins_failed();
}
