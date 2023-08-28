#include <stdio.h>
int fibonacci(int);
int main()
{
	int n,i;
	printf("enter the  number of terms  to print fibonacci seires:\n");
	scanf("%d", &n);
	printf("the fibonacci series up to given no of terms::\n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",fibonacci(i));
	}
	return 0;
}

int fibonacci(int i){ 
	if(i==0) 
	    return 0; 
	else if(i==1)
	    return 1; 
	else
	    return (fibonacci(i-1)+fibonacci(i-2));
} 