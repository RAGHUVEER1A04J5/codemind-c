#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    if(a[i]%2!=0&&i%2!=0)
    {
        k=1;
    }
    else if(a[i]%2!=0&&i%2==0)
    {
        k=0;
        break;
    }
    }
    if(k==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}