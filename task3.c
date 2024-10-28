#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define GRID_SIZE 9
int main()
{
        srand(time(0));


	int xt=rand()% GRID_SIZE+1;
	int yt=rand()%GRID_SIZE+1;

	printf("Treasure Location\n");

	for(int i=1;i<=GRID_SIZE;i++)
	{
		for(int j=1;j<=GRID_SIZE;j++)
		{
			if(i==xt && j==yt)
			{
				printf("(%d,%d) ",xt,yt);
			}
			else
			{
				printf(".\t");
			}
		}
		printf("\n");

	}
	printf("Hurrah! , I have found the hidden treasure at (%d,%d) \n",xt,yt);
	
	return 0;
}
