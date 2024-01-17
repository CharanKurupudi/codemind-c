#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    scanf("%[^
]s",str);
    int l=strlen(str),f=1,i;
    for(i=0;i<l;i++)
    {
        if(str[i]!=str[l-i-1])
        {
            f=0;
            break;
        }
    }
    if(f==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}