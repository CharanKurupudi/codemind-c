#include<stdio.h>
int main()
{
    int n,i,j,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int f,g;
    scanf("%d%d",&f,&g);
    int ar[f][g];
    for(i=0;i<f;i++)
    {
        for(j=0;j<g;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           printf("%d ",arr[i][j]+ar[i][j]); 
        }
        printf("
");
    }
}