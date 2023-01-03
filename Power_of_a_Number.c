#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,w,s;
    scanf("%d%d%d",&x,&y,&m);
    s=(pow(x,y));
    w=s%m;
    printf("%d",w);
}