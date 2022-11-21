#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Uneti brojeve a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    int d = (a+b+c)/3;
    printf("srednja vrednost brojeva %d, %d, %d je: %d", a, b, c, d);
    return 1;
}