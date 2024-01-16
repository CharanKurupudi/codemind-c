#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    int avg=s/n,d=0;
    for(i=0;i<n;i++)
    {
        if(avg>=arr[i])
        {
            d=d+1;
        }
    }
    printf("%d",d);
}