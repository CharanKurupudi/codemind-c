#include<stdio.h>
int main()
{
    int a,i,j,k;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        for(j=i;j<a;j++)
        {
            printf(" ");
        }
        for(k=i;k>=1;k--)
        {
            printf("%d ",i);
        }
        printf("
");
    }
}