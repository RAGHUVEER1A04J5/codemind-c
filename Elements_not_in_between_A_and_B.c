#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b,c,k;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&b,&c);
        if(a[i]<b||a[i]>c)
        {
        printf("%d ",a[i]);
        k=1;
        }
    }
    if(k!=1)
    {
        printf("-1");
    }
       
}