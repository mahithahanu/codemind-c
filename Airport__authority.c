#include<stdio.h>
int main()
{
    int n,a[100],i,c=0,m=0,b,q;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int w;
    scanf("%d",&w);
    for(i=0;i<n;i++)
    {
    if(a[i]<=w)
    {
        c++;
    }
    else
    {
       m++;
    }
    }
    q=2*m;
    b=c+q;
    printf("%d",b);
}