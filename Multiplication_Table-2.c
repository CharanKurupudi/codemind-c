#include<stdio.h>
int main()
{
    int n,r,i;
    scanf("%d%d",&r,&n);
    for(i=1;i<=n;i++)
    {
        printf("%d x %d = %d
",r,i,r*i);
    }
}