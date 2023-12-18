#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int e;
    scanf("%d",&e);
    for(i=0;i<n;i++)
    {
        if(arr[i]==e)
        {
            s=1;
            break;
        }
    }
    if(s==1)
    {
        printf("True");
    }
    else 
    {
        printf("False");
    }
}