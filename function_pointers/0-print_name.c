#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name- a fonction that print a name
*@name: the name to print
*@f: pointers
*/

void print_name(char *name, void (*f)(char *))

{
f(name);
}
