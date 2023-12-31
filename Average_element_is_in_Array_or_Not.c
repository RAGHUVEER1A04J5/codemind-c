#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n],sum=0,avg,res;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
{
     sum=sum+a[i];  
}
  avg=sum/n;
  for(i=0;i<n;i++)
{
    if(avg==a[i]) 
    {
        res=1;
        break;
    }
}
    if(res==1)
    {
        printf("True");
    }
        else
        {
            printf("False");
        }
        
    
}