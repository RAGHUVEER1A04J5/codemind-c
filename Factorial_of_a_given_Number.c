#include<stdio.h>
int main()
{
    int i,n,mul=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        mul=mul*i;
    }
    printf("%d",mul);
}