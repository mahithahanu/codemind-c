#include<stdio.h>
int sum(int n)
{
    int r,s=0;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s+r;
    }
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n>10)
    {
    n=sum(n);
    }
     printf("%d",n);
}