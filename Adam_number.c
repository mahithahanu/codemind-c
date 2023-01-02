#include<stdio.h>
int main()
{
    int n,i,p,q,s=0,r,t,l=0;
    scanf("%d",&n);
    p=n*n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    q=s*s;
    while(q!=0)
   {
       t=q%10;
       q=q/10;
       l=l*10+t;
   }
   if(p==l)
   printf("True");
   else
   printf("False");
   
}