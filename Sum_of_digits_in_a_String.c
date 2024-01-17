#include<stdio.h>
int main()
{
    int i,s=0;
    char str[50];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            s=s+str[i]-'0';
        }
    }
    str[i]=NULL;
    printf("%d",s);
}