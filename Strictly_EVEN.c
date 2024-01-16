#include<stdio.h>
int main()
{
    int a,i,f=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        if(i%2!=0 && arr[i]%2==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}