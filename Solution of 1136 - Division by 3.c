#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,i,j,sonda;
    scanf("%d", &a);
    for(b=1; b<=a; b++)
    {
        scanf("%d%d", &c, &d);
        e=(c/3)*2;
        f=c%3;
        if(f==2)
            e=e+1;
        i=(d/3)*2;
        j=d%3;
        if(j==2)
            i=i+1;
        sonda=i-e;
        sonda=sonda+1;
        if(f==1)
            sonda=sonda-1;
        printf("Case %d: %d\n",b,sonda);
    }
    return 0;
}

