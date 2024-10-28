#include<stdio.h>
int main()
{
        int N;
	int i=1;
       
        printf("Enter the interger N: ");
        scanf("%d",&N);

	printf("Right-aligned pyramit: \n");

	while(i<=N)
	{
		int j=N;
		while(j>=i)
		{
			printf(" ");
			j--;
		}
		int l=0;
		while(l<i)
		{
			printf("*");
			l++;
		}

		printf("\n");
		i++;
	}
	i=1;
	printf("\nCentered triangle: \n");

	while(i<=N)
	{
		int j=1;
		while(j<=N-i)
		{
			printf(" ");
			j++;
		}
		int l=1;
		while(l<=(2*i-1))
		{
			printf("*");
			l++;
		}
		printf("\n");
		i++;
	}

        return 0;
}
