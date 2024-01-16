#include<stdio.h>
int main()
{
    int a,i,j,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=i;j<a;j++)
        {
            printf(" ");
        }
        for(k=i;k>=1;k--)
        {
            printf("%d ",a-k+1);
        }
        printf("
");
    }
}