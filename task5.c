#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Width 6
#define Height 6
int main()
{
	unsigned char image[Height][Width][3]; //Number (3) for the three color of a pixel in an RGB
	unsigned char GrayImage[Height][Width];

	srand(time(0)); //To generate random number 

	printf("image in RGB format: \n");
	printf("{Red,Green,Blue}\n");
        for(int i=0; i<Height;i++)
	{
		for(int j=0;j<Width;j++)
		{
			image[i][j][0]=rand() % 256; //Red
			image[i][j][1]=rand() % 256; //Green
			image[i][j][2]=rand() % 256; //Blue
			printf("{%d, %d, %d}\t",image[i][j][0],image[i][j][1],image[i][j][2]);
		}
		printf("\n");
	}
        printf("\nGrayscale image: \n");
        for(int i=0;i<Height;i++)
	{
		for(int j=0;j<Width;j++)
		{
			GrayImage[i][j]=0.299*image[i][j][0]+0.587*image[i][j][1]+0.114*image[i][j][2];
			printf("{%3d} ",GrayImage[i][j]);
		}
		printf("\n");
	}	
	return 0;
}
