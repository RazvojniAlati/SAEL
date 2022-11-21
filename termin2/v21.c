#include <stdio.h>
void apsolutna(int a)
{
    if(a>=0)
    {
        printf("Apsolutna vrednost broja %d je %d", a, a);
    }
    else
        printf("Apsolutna vrednost broja %d je %d", a, -a);
}

int main()
{
    int br;

    printf("Unesite broj: ");
    scanf("%d", &br);

    apsolutna(br);
    return 0;
}