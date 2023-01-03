#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int d=n%10;
    while(n>0)
    {
        int x=n%10;
        if(d<x)
        d=x;
        n=n/10;
    }
    printf("%d",d);
}