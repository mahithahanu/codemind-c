#include<stdio.h>
#include<math.h>
void happy(int n)
{
    int r,s=0,m;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s+(r*r);
    }
    m=log10(s)+1;
    if(m==1)
    {
        if(s==1 || s==7)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }
    else
    {
        happy(s);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    happy(n);
}