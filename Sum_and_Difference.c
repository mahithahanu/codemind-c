#include<stdio.h>
int main()
{ 
    int a,b,s,m;
    scanf("%d%d",&a,&b);
    float c,d,l,n;
    scanf("%f%f",&c,&d);
    s=a+b;
    m=a-b;
    l=c+d;
    n=c-d;
    printf("%d %d
",s,m);
    printf("%.1f %.1f",l,n);
}