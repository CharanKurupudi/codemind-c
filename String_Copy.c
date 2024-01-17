#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    scanf("%[^
]s",str);
    char str1[50];
    strcpy(str1,str);
    printf("%s",str1);
}