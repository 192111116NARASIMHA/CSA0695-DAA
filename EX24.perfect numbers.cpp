#include <stdio.h>
int main()
{
    int s,e,sum;
    printf("Enter the starting element of the range : ");
    scanf("%d", &s); 
    printf("Enter the ending element of the range : ");
    scanf("%d", &e);
    printf("All Perfect numbers between %d to %d:\n",s,e);
    for(int i=s;i<=e;i++)
    {
    	sum=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        
        if(sum == i)
        {
            printf("%d ", i);
        }
    }
    printf(" \n ");
    return 0;
}
