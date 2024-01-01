#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<m;i++)
    {
        int sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+a[j][i];
        }
            printf("%d ",sum);
    }
}