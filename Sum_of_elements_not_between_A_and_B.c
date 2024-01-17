#include<stdio.h>
int main()
{
    int a,x,y,d=0,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&x,&y);
    for(i=0;i<a;i++)
    {
        if(x<=arr[i] && arr[i]<=y)
        int s=0;
        else
        {
            d=d+arr[i];
        }
    }
    printf("%d",d);
}