
#include<stdio.h>
int main()
{
    int n,first,last,sum=0;
    scanf("%d",&n);
    last=n%10;
    first=n;
    while(n>=10)
    {
        n=n/10;
    }
    first=n;
    sum=first+last;
    {
    printf("%d",sum);
    }
    
    
}
