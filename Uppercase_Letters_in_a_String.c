#include<stdio.h>
int main()
{
    char str[60];
    scanf("%[^
]s",str);
    int c=0,i;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            c++;
        }
    }
    printf("%d",c);
}