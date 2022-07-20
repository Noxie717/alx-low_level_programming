#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: character string
 * @f: function pounter
 */

void print_name(char *name, void (*f)(char *))

{
	f(name);
}
