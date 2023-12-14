#include<stdio.h>
int main()
{
    int i,a,b,r,p,sum1=0,sum2=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        r=a%i;
        if(r==0)
        {
            sum1=sum1+i;
        }
    }
    for(i=1;i<b;i++)
    {
       p=b%i;
       if(p==0)
       {
          sum2=sum2+i; 
       }
    }
    if(sum1==b && sum2==a)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}