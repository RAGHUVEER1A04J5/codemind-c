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
    int z,c=0;
    for(i=0;i<n;i++)
    {
    scanf("%d",&z);
    if(z==a[i])
    {
        c++;
    }
    }
    printf("%d",c);
    
        
}

