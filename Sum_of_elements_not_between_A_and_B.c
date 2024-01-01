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
    int sum=0,b,c;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&b,&c);
        if(a[i]<b||a[i]>c)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
}