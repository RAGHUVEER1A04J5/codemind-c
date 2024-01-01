#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    int k=n%2;
     for(i=0;i<n/2;i++)
     {
         printf("%d %d ",a[i],a[n-i-1]);
     }
     if(k)
     printf("%d 0 ",a[n/2]);
}