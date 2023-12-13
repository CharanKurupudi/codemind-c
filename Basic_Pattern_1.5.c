#include<stdio.h>
int main()
{
    int n;
    char i,j;
    scanf("%d",&n);
    for(i=65;i<n+65;i++)
    {
        for(j=65;j<n+65;j++)
        {
            printf("%c ",i);
        }
        printf("
");
    }
}