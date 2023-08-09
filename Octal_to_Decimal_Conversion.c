#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,r,s=0;
    scanf("%d",&n);
    i=0;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s+(pow(8,i)*r);
        i++;
    }
    printf("%d",s);
}