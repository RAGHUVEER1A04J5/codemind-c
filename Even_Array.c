#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,res;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            res=0;
        }
        else 
        {
             res=1;
             break;
        }
    }
    if(res==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}