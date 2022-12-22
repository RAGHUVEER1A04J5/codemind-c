#include<stdio.h>
int main()
{
    int n,i,m,l,g;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m*n;i++)
    {
        if((n*i)%m==0)
        {
            l=n*i;
            break;
        }
    }
   g=(n*m)/l;
    printf("%d",g);
}