#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i;
    scanf("%[^
]s",str);
    if(strlen(str)>=7)
    {
        printf("%c",str[6]);
    }
}