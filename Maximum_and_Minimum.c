#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,s,d=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0],max=a[0];
    for(i=0;i<n;i++)
    {
        s=0;
       for(j=0;j<n;j++)
       {
          
           if(a[i]==a[j])
           {
               s=s+1;
           }
       }
       if(s==a[i])
       {
           if(min>a[i])
           {
               min=a[i];
           }
           if(max<a[i])
           {
               max=a[i];
           }
           a[i]=0;
           d=1;
       }
    }
    if(d==1)
    printf("%d %d",min,max);
    if(d==0)
    printf("-1");
    
}