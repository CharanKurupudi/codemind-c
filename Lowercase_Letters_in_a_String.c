#include<stdio.h>
int main()
{
    char str[60];
    int c=0,i;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            c++;
        }
    }
    printf("%d",c);
}