#include<stdio.h>


void Endianness()
{
	int Number=0x876A4B1F;
	char *Pointer=(char*)&Number;

	if(Pointer[0]==0x1F) //if the index[0], which is the first byte equle to 0x1F , the means that the system is little-endain 
	{
		printf("Endianness : Little Endian\n"); //LSB
	}
	else
	{
		printf("Endianness : Big Endian\n"); //MSB
	}
}

void SystemArchitecture()
{
	if(sizeof(void*)==8) //8 bytes it indicates a 64 bit 
	{
		printf("Architecture: The size is 64-bit\n");
	}
	else
	{
		printf("Architecture: The size is 32-bit\n");
	}
}

int main()
{
	Endianness();
	SystemArchitecture();
}
