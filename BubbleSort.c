//Program in C to demonstrate sorting of a list in ascending order using Bubble Sort algorithm
#include<stdio.h>
int main()
{
	int i,j,limit,temp,array[100];
	//Enter the amount of elements that you want in the list
	printf("Enter the limit :\n");
	scanf("%d",&limit);
	//Entering elements from user
	for(i=0;i<limit;i++)
	{
		printf("Enter the elements of list at position %d :\t",i);
		scanf("%d",&array[i]);	
	}
	
	printf("The unsorted array is :\n");
	for(i=0;i<limit;i++)
	{
		printf("%d ",array[i]);
	}
	//Now sort the array using bubble sort(Bubble out the largest number)
	for(i=limit-2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	printf("\nThe sorted array is :\n");
	for(i=0;i<limit;i++)
	{
		printf("%d ",array[i]);
	}
}
