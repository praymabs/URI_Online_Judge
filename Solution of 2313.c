#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    if((a+b)>c && (a+c)>b && (b+c)>a)
    {
        if(a == b || a == c || b == c)
        {
            printf("Valido-Isoceles\nRetangulo: N\n");
        }
        else if(a!=b && a!=c && b!=c)
        {
            printf("Valido-Escaleno\n");
            if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
            {
                printf("Retangulo: S\n");
            }
            else
            {
                printf("Retangulo: N\n");
            }
        }
    }
    else if(a==b && a==c && b==c)
    {
        printf("Valido-Equilatero\n");
    }
    else
    {
        printf("Invalido\n");
    }
    return 0;
}
