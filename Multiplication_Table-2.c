

#include<stdio.h>
int main()
{
    int i,n,a,b,mul=1;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        mul=a*i;
        printf("%d x %d = %d
",a,i,a*i);
    }
}

