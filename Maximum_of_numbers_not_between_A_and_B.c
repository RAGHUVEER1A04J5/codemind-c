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
    int b,c,max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&b,&c);
        if((a[i]<b||a[i]>c)&&a[i]>max)
        {
            max=a[i];
        }
    }
    if(max==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",max);
    }
    
}