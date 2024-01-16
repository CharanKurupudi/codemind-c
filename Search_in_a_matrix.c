#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int x,s=0;
    scanf("%d",&x);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(x==arr[i][j])
            {
                s=1;
            }
        }
    }
    printf("%d",s);
}