#include<stdio.h>
main()
{
    int A, B, H, L,sum;
    scanf("%d%d", &A, &B);
    sum=(A+B-1);
    H=sum-A;
    L=sum-B;
    printf("%d %d", H,L);
    return 0;
}
