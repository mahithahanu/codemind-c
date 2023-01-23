#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(c<b && c>=a )
        printf("YES");
        else 
        printf("NO");
        printf("
");
    }
}