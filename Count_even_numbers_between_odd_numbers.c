#include<stdio.h>
int main()
{
    int a,i,s=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        if((arr[i-1])%2!=0 && arr[i]%2==0 && (arr[i+1])%2!=0)
        {
            s++;
        }
    }
    printf("%d",s);
}