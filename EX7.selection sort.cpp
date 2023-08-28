#include <stdio.h>
int main()
{
    int size,i,j,array[100],position,swap;
    printf("\n Enter the size of the array: ");
    scanf("%d", &size);
    printf("\n Enter %d elements of the array: \n", size);
    for (i = 0; i <size; i++)
    {   
    scanf(" %d", &array[i]);
    }
    for(i=0;i<size;i++)
    {
    	position=i;
    	for(j=i+1;j<size;j++)
    	{
    		if(array[position]>array[j])
    		position=j;
		}
		if (position != i)
		{
			swap=array[i];
			array[i] = array[position];
            array[position] = swap;
		}
	}
	printf("the sorted array is:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t", array[i]);
	}
	return 0;
}
