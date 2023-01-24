#include<stdio.h>
int main()
{
    long int n,s=0,l,t,r=0;
    scanf("%ld",&n);
    t=n;
    while(t!=0)
    {
        l=t%10;
        t=t/10;
        s=s*10+l;
    }
   while(n!=0)
    {
        r=n%10;
        n=n/10;
        r++;
    }
    if(r==10 && s%10!=0 )
    printf("Valid");
    else 
    printf("Invalid");
}