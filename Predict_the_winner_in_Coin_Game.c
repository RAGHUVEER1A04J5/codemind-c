#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    if(m%2!=0&&n%2!=0)
    {
        printf("Player 2");
    }
    else
    //else if(m>=2&&m>=2)
    {
        printf("Player 1");
    }
    //else
    //{
        //printf("There's no move to make");
    //}
}