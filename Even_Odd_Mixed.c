#include<stdio.h>
int main()
{
    int n,x=0,y=0,a;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        if(a%2==0)
        x=1;
        else
        y=1;
        n=n/10;
    }
    if(x==1&&y==0)
    printf("Even");
    else if(x==0&&y==1)
    printf("Odd");
    else
    printf("Mixed");
}