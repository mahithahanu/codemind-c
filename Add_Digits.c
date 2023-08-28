#include<stdio.h>
#include<math.h>
void fun(int n)
{
    int s=0,r,m;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s+r;
    }
    m=log10(s)+1;
    if(m==1)
    {
        printf("%d",s);
    }
    else
    {
      fun(s);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
}