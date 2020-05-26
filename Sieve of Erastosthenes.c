#include<stdio.h>
//Program in C to calculate prime numbers upto a number n using Sieve of Eratosthenes
int main()
{
	int limit;
	//Enter limit upto which the prime numbers are to be shown
	printf("Enter the limit :\n");
	scanf("%d",&limit);
	if(limit<=0)
		printf("Error:Please enter some positive whole number!!");
	//Here,we are marking.0 means prime number whereas 1 means composite number
	//Firstly,mark all numbers as prime
	int array[limit]={0};
	//Sieve
	for(int i=2;i<=limit;i++)
	{
		for(int j=i*i;j<=limit;j+=i)
		{
			//Marking as composite
			array[j-1]=1;
		}
	}
	//Validating our markings
	printf("The prime numbers upto %d using Seive of Eratosthenes are :\n",limit);
	for(int i=2;i<limit;i++)
	{
		if(array[i-1]==0)
		{
			//printing prime numbers one by one
			printf("%d ",i);
		}
	}
return 0;
}
