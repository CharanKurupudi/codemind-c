#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,s=0,p=1;
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        s=s+b;
        p=p*b;
        a=a/10;
    }
    printf("%d",abs(s-p));
}