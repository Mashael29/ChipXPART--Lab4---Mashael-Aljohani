#include<stdio.h>
#include<unistd.h>
int main()
{

	int Number_Of_Minutes;

	printf("Enter the number of minutes: ");
	scanf("%d",&Number_Of_Minutes);

	printf("M:S\n");

	int min=0;
	int sec=0;


	for(int min=0;min<=Number_Of_Minutes;min++)
	{

		int MaxSec;
		if(min==Number_Of_Minutes)
		{
			MaxSec=0; //if true , it sets MaxSec to 0 
				  //which mean the count set to 0 for the final minute
		}
		else 
		{
			MaxSec=59; //false => To count from 0 to 59 seconds
		}

		for (sec=0;sec<=MaxSec;sec++)
		{
			printf("%02d : %02d\n",min,sec);
			sleep(1); //To wait 1 second 
		}
	}

	return 0;
}
