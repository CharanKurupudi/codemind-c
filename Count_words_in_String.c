#include<stdio.h>
int main()
{
    char str[50];
    scanf("%[^
]s",str);
    int c=0,i;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c+1);
}