#include<stdio.h>
#include<limits.h>
int main()
{
	int cities=10;
	int population[cities];
	int Max_population=0;
	int Min_population=INT_MAX;
	float Ave_population;
	int Sum=0;


	for(int i=0;i<cities;i++)
	{
		printf("Enter The population of city %d: ",i+1);
		scanf("%d",&population[i]);
		
		Sum=Sum+population[i];
		if(population[i]>Max_population)
		{Max_population=population[i];}

		if(population[i]<Min_population)
		{Min_population=population[i];}
	}

	printf("\nThe population in reverse order: \n");
	for(int i=cities-1;i>=0;i--)
	{
		printf("city %d: %d\n",i+1,population[i]);
	}

	Ave_population=(float)Sum/cities;

	printf("\nMaximum population: %d ",Max_population);
	printf("\nMinimum population: %d ",Min_population);
	printf("\nAverage population: %.3f\n",Ave_population);

	return 0;
}
