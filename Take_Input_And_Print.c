#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[20],ch2[20];
    //gets(ch1);
    scanf("%[^
]s",ch1);
    strcpy(ch2,ch1);
    printf("%s",ch2);
}