#include <stdio.h>
int apsolutna(int a)
{
    if(a>=0)
    {
        return a;
    }
    else
        return -a;
}

int main()
{
    int br, aps;

    printf("Unesite broj: ");
    scanf("%d", &br);

    aps = apsolutna(br);

    printf("Apsolutna vrednost broja %d je %d", br, aps);
    return 0;
}