#include<stdio.h>
int main()
{
    int a,i,b,c=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);
    for(i=0;i<a;i++)
    {
        if(b==arr[i])
        {
            c++;
        }
    }
    printf("%d",c);
}