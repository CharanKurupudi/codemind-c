#include<stdio.h>
int main()
{
    int n,i,s,t,r=0,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=r+i;
        sum=sum+(i*i);
    }
    t=r*r;
    s=t-sum;
    printf("%d",s);
}