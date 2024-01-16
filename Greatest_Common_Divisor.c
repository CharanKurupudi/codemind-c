#include<stdio.h>
int main()
{
    int a,b,g,l,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
            g=i;
        }
    }
    l=g;
    printf("%d",l);
}