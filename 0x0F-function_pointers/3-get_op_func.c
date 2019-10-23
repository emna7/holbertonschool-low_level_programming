/**
 * get_op_func - returns a pointer to the function that
 *corresponds to the operator given as a parameter
 * @s: char
 * Return: int
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (i < 6)
{
if (s == ops[i].op)
break;
i++;
}
return (ops[i].op);
}
