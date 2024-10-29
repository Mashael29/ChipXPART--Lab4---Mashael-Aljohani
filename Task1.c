#include<stdio.h>

void MemoryAddressing(void)
{
        int IntergerPtrs[4];
	char CharPtrs[4];
	short ShortPtrs[4];
	double DoublePtrs[4];

	printf("Interger Array: \n");
        for(int i=0;i<4;i++)
        {
                printf("%p\n",(void*)&IntergerPtrs[i]);
        }

	printf("\nCharacter Array: \n");
	for(int i=0;i<4;i++)
	{
		printf("%p\n",(void*)&CharPtrs[i]);
	}

        printf("\nShort Array: \n");
        for(int i=0;i<4;i++)
        {
                printf("%p\n",(void*)&ShortPtrs[i]);
        }

        printf("\nDouble Array: \n");
        for(int i=0;i<4;i++)
        {
                printf("%p\n",(void*)&DoublePtrs[i]);
        }

}
int main()
{
	MemoryAddressing();

	return 0;
}
