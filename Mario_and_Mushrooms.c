#include<stdio.h>
int main()
{
    int x,s,n,h,m,b;
    scanf("%d",&x);
    s=1;
    n=2;
    h=3;
    m=(n+x)-3;
    while(m)
    {
        if(m>3)
        {
            b=m-3;
            m=b;
        }
        else
        {
            if(m==2)
            {
                printf("NORMAL");
                break;
            }
            else if(m==1)
            {
                printf("SMALL");
                 break;
            }
            else
            {
                printf("HUGE");
                 break;
            }
        }
    }
}