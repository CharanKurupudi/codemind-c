#include<stdio.h>
int main()
{
    int a,s=0,i;
    scanf("%d",&a);
    int t=a;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            s=s+i;
        }
    }
    if(s==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}