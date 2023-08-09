#include "library.h"
#include <stdio.h>

void greet(const char* name) {
    fprintf(stdout, "C: Hello, %s!\n", name);
}
