#include<stdio.h>
int main()
{
   int a,n,m,p,q,i;
   while(scanf("%d",&a)==1){
   if(a==0)
   break;
   scanf("%d %d",&n,&m);
   for(i=0;i<a;i++)
{
   scanf("%d %d",&p,&q);
   if(p==n || q==m)
    printf("divisa\n");

   else if(p>n && q>m)
    printf("NE\n");

   else if(p<n&&q>m)
    printf("NO\n");

   else if(p<n&&q<m)
    printf("SO\n");

   else if(p>n&&q<m)
    printf("SE\n");
}
}
return 0;
}
