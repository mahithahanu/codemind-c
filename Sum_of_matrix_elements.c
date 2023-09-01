#include<stdio.h>
int main()
{
    int n,m,a[100][100],i,j,s=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            s=s+a[i][j];
        }
    }
    printf("%d",s);
}