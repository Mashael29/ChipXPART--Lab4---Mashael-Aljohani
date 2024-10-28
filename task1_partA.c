#include<stdio.h>
int main()
{
	int N;
	int i,j;

	printf("Enter the interger N: ");
	scanf("%d",&N);

	printf("Right-aligned pyramid: \n");
	for (i=1;i<=N;i++)
	{
		for (j=N;j>=i;j--)
		{
			printf(" ");
		}
		
		for(int l=0; l<i;l++)
		{
	         	printf("*");
		}

		printf("\n");
	}

	printf("\nCentered triangle: \n");
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N-i;j++)
		{
			printf(" ");
		}
		for(int j=1;j<=(2*i-1);j++)
		{
			printf("*");
		}
		printf("\n");

	}
	return 0;
}
