#include<stdio.h>
int main()
{
    int n,r,i;
    scanf("%d%d",&n,&r);
    for(i=n;i<=r;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}