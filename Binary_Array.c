#include<stdio.h>
int main()
{
    int n,a[100],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1 or a[i]==0)
        c++;
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}