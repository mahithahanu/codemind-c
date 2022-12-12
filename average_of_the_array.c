#include<stdio.h>
int main()
{
    int n,i;
    float s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      s=s+a[i];
      
    }
    s=s/n;
    printf("%.2f",s);
}