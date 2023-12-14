#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,t,l=0,sum=0;
    scanf("%d",&n);
    t=n;
        while(n>0)
        {
            l++;
            n=n/10;
            
        }
        n=t;
        while(t>0)
        {
          r=t%10;
          sum=sum+pow(r,l);
          t=t/10;
          l--;
        }
        if(sum==n)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
}