#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0,dif=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
           sum=sum+a[i]; 
        }
        else
        {
            dif=dif+a[i];
        }
    }
    int ans=abs(sum-dif);
     printf("%d",ans);
}