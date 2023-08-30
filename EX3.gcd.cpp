#include<stdio.h>
int main()
{
	int n1,n2,i,j,gcd;
	printf("enter two numbers : ");
	scanf("%d %d",&n1,&n2);
	
	for(i=1; i<=n1;++i)
	{
		for(j=1;j<=n2;j++)
		{
			if(n1%i == 0 && n2%j == 0)
			{	
				if(i==j)
				gcd=i;
			}
		}
		
	}
	printf("GCD of %d and %d is %d",n1,n2,gcd);
	return 0;
}
