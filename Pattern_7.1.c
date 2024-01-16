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
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("
");
    }
}