#include<stdio.h>
int main()
{
    int a,i,s=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    int avg=s/a,c=0;
    for(i=0;i<a;i++)
    {
        if(avg<=arr[i])
        {
            c++;
        }
    }
    printf("%d",c);
}