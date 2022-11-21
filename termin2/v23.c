#include <stdio.h>
#include <math.h>
float diskriminanta(float a, float b, float c)
{
    return (b*b-4*a*c);
}

int main()
{
    float a, b, c;
    printf("Unesite koeficijente: ");
    scanf("%f %f %f", &a, &b, &c);
    float d = diskriminanta(a,b,c);
    if (d>0)
    {
        printf("Resenje 1 je: %.3f", ((-b+sqrtf(d))/(2*a)));
        printf("Resenje 1 je: %.3f", ((-b-sqrtf(d))/(2*a)));
    }
    else if (d==0)
    {
        printf("jedino resenje je: %.3f", (-b/(2*a)));
    }
    else
    {
        printf("Resenje 1 je: %.3f + %.3fi", (-b/(2*a)), (sqrtf(-d)/(2*a)));
        printf("Resenje 1 je: %.3f - %.3fi", (-b/(2*a)), (sqrtf(-d)/(2*a)));
    }
    //printf("Diskriminanta je %.3f", diskriminanta(a, b, c));
    return 0;

}