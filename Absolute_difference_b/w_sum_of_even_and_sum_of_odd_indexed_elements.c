#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,s1=0,s2=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        if(i%2!=0)
        {
            s1=s1+arr[i];
        }
        if(i%2==0)
        {
            s2=s2+arr[i];
        }
    }
    printf("%d",abs(s1-s2));
}