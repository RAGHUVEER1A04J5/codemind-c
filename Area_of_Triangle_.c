#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,r;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)*0.5;
    r=sqrt(s*((s-a)*(s-b)*(s-c)));
    printf("%.2f",r);
}