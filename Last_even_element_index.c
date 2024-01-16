#include<stdio.h>
int main()
{
    int a,s=0,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        if(arr[i]%2==0)
        {
            s=i;
        }
    }
    printf("%d",s);
}