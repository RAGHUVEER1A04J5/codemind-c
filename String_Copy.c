#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],str1[20];
    scanf("%[^
]s",str);
    scanf(" %[^
]s",str1);
    strcpy(str1,str);
    printf("%s",str1);
}