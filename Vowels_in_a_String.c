#include<stdio.h>
int add(char str[50],char v)
{
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]==v)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    char str[50],v;
    scanf("%[^
]s",&str);
    scanf("
");
    scanf("%c",&v);
    int c=(add(str,v));
    if(c==-1)
    {
        printf("False");
    }
    else
    {
        printf("True");
        printf("
%d",c);
    }
}