
#include<stdio.h>
int main()
{
    int i,n,a,b,mul=1;
    scanf("%d%d%d",&n,&a,&b);
    for(i=a;i<=b;i++)
    {
        mul=n*i;
        printf("%d x %d = %d
",n,i,n*i);
    }
}

