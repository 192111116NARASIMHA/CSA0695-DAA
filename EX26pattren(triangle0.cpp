#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter the no of rows:\n");
	scanf("%d",&n);
	for(i=1;i<=n+1;i++)
	{
		for(j=1;j<i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}