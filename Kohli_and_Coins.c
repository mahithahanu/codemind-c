#include<stdio.h>
int main()
{
    int x,m;
    scanf("%d",&x);
     if(x%10!=0 && x%5==0)
        {
        m=x/10;
        printf("%d",m+1);
        }
        else if(x%10==0 && x%5==0)
        {
        m=x/10;
        printf("%d",m);
        }
        else
        {
            printf("-1");
        }
}