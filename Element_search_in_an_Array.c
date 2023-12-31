#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n],res,e;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&e);
    }
    for(i=0;i<n;i++)
{
        if(e==a[i])
        {
         res=1;
         break;
        }
}
    if(res==1)
    {
        printf("True");
    }
        else
        {
            printf("False");
        }
        
    
}