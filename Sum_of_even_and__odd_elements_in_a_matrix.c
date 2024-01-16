#include<stdio.h>
int main()
{
    int a,b,i,j,s=0,t=0;
    scanf("%d%d",&a,&b);
    int arr[a];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]%2==0)
            {
                s=s+arr[i];
            }
            else
            {
                t=t+arr[i];
            }
        }
    }
    printf("%d %d",s,t);
}