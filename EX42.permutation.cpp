#include <stdio.h>
void printarray(int arr[], int size)
{
    int i,j;
    fprintf(stdout, "[ " );
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    fprintf(stdout, "]\n" ); 
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void permutation(int *arr, int start, int end)
{
    if(start==end)
    {
        printarray(arr, end+1);
        return;
    }
    int i;
    for(i=start;i<=end;i++)
    {
        swap((arr+i), (arr+start));
        permutation(arr, start+1, end);
        swap((arr+i), (arr+start));
    }
}
int main( int argc, char** argv) 
{
	int size,i;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	int arr[size];
	printf("enter the elemnts:\n");
	for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
	permutation( arr, 0, size-1);
	return 0; 
} 