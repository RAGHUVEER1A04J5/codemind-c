#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
}