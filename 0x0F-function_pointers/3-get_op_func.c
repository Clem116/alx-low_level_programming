#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects correct function to perform
 * the operation asked by the user
 * @s: The operation passed as argument
 *
 * Return: Pointer to the function corresponding
 * to the operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add};
{"-", op_sub};
{"*", op_mul};
{"/", op_div};
{"%", op_mod};
{NULL, NULL},
};
int i = 0;
while (ops[i].op != NULL && *9ops[i].op) != *s)
i++;
return (ops[i].f);
}
