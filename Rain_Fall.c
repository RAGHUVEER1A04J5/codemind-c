
#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    if(r<3)
    printf("LIGHT");
    else if(r>=3&&r<7)
    printf("MODERATE");
    else
    printf("HEAVY");
}

