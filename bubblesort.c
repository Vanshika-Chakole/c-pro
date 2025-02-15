#include<stdio.h>


int i, n, temp, j;
void printArray(int* A, int n){
	for( i = 0; i < n; i++){
		printf(" %d ",A[i]);
	}
	printf("\n");
}

void bubbleSortAddeptive(int *A,int n)
{
	int temp;
	int isSorted = 0;
	for(i = 0; i < n-1; i++) //for no. pass
	{
		printf("Working on pass number %d\n", i+1);
		isSorted = 1;
		for(j = 0; j < n-1-i; j++) //for comperision in each pass
		{
			if(A[j]>A[j+1])
			{
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
				isSorted = 0;
			}
		}
		if(isSorted){
		return ;
	}
	}
}

void bubbleSort(int *A,int n)
{
	int temp;
	for(i = 0; i < n-1; i++) //for no. pass
	{
		printf("Working on pass number %d\n", i+1);

		for(j = 0; j < n-1-i; j++) //for comperision in each pass
		{
			if(A[j]>A[j+1])
			{
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
}

int main()
{
	//int A[]={13, 45, 67, 34, 87,68};
	int A[] = {1, 2, 3, 4, 5, 6};
    //int A[]={13, 45, 67, 34, 644, 756, 2, 894, 87,68};

	int n = 6;
	printArray(A, n); //printing the array befor sorting
	bubbleSort(A, n);//function to sort the array 
	printArray(A, n);//printing the array befor sorting

	return 0;
	
}
