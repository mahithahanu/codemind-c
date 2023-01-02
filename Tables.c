#include<stdio.h>
int main()
{
    int n,m,i,r=1;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i=i+2)
    {
        r=n*i;
        printf("%d x %d = %d
",n,i,r);
    }
}