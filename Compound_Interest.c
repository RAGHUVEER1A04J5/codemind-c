
#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t;
    scanf("%d%d%d",&p,&r,&t);
    float Amount=p*pow((1+r/100.0),(t));
    float ci=Amount-p;
    printf("%.2f",ci);
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

