#include<stdio.h>
int main()
{
    int n,r,i,c=0;
    scanf("%d%d",&n,&r);
    for(i=n+1;i<r;i++)
    {
        if(i%2==0 && i%3==0)
        {
           c++;
        }
        printf("%d",c);
    }
    