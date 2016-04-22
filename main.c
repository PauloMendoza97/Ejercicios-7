#include <stdio.h>
#include <stdlib.h>

void strcpy (char*n,char*m);
int main()
{
    char x[20]="Paulo Mendoza";
    char y[20];
    strcpy(y,x);
    printf("%s",y);
    return 0;
}
void strcpy(char*n,char*m)
{
    while (*n++=*m++);
}
