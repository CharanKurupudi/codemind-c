#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("
");
    }
}