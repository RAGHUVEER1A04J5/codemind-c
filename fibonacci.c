#include<stdio.h>
int main()
{
    int i,n,t1=0,t2=1,nt=0;
    scanf("%d",&n);
    printf("%d %d ",t1,t2);
    for(i=2;i<n;i++)
    {
        nt=t1+t2;
        printf("%d ",nt);
        t1=t2;
        t2=nt;
    }
}