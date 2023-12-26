#include<stdio.h>
int main()
{
    int a,b,x,l,c1,c2,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        x=i;
        c1=0;
        c2=0;
        while(x)
        {
            l=x%10;
            if(l==0)
            {
                c1==0;
            }
            else
            {
                if(i%l==0)
                {
                    c1++;
                }
            }
            c2++;
            x=x/10;
        }
        if(c1==c2)
    {
        printf("%d ",i);
    }
    }
}