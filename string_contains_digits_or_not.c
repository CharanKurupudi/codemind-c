#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    char str[50][50];
    for(i=0;i<a;i++)
    {
        scanf("%s",str[i]);
        int d=0;
        for(j=0;str[i][j]!=NULL;j++)
        {
            if(str[i][j]>=48 && str[i][j]<=57)
            {
                d=1;
                break;
            }
        }
        if(d==1)
        {
            printf("Yes
");
        }
        else
        {
            printf("No
");
        }
    }
}