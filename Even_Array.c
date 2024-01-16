#include<stdio.h>
int main()
{
    int a,i,s=0,f=0;
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
            f++;
        }
    }
    if(f==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}