#include<stdio.h>
int main()
{
    char i,j;
    int n;
    scanf("%d",&n);
    for(i=65;i<n+65;i++)
    {
        for(j=65;j<n+65;j++)
        {
            printf("%c ",j);
        }
        printf("
");
    }
}