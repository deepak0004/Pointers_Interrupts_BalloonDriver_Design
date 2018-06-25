#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str = "Foo"; // Compiler marks the constant string as read-only
    printf(str);

    return 0;
}