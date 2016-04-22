#include <stdio.h>
#include <stdlib.h>

int strcmp(char *n, char *m);
int main()
{
    int n;
    char x[20] = "Paulo Mendoza";
    char y[20] = "Paulo Mendo";

    n = strcmp(y, x);
    printf("%i\n", n);
    return 0;
}

int strcmp(char *n, char *m)
{
    for ( ; *n == *m; n++, m++)
        if (*n == '\0')
        return 0;
    return *n - *m;
}
