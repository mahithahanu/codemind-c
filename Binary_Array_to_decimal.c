#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,j,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=n-1;
    for(i=0;i<n;i++)
    {
        s=s+((pow(2,j))*a[i]);
        j--;
    }
    printf("%d",s);
}