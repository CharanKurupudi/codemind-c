#include<stdio.h>
int main()
{
	int n,i,j,s,m;
	scanf("%d%d",&n,&m);
	int arr[n][m];
	for(i=0;i<n;i++)
	{
		s=0;
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
			s+=arr[i][j];
		}
		printf("%d ",s);
	}
}