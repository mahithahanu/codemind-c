#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {  
        int x;
        scanf("%d",&x);
        if(x<3)
        printf("LIGHT");
        else if(x>=3 && x<7)
        printf("MODERATE");
        else if(x>=7)
        printf("HEAVY");
        printf("
");
    }
}