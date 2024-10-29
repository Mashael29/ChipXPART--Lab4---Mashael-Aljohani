#include<stdio.h>
#include<string.h> // to the strlen()
#include<ctype.h> //For tolower() 
#define MaxLenght 100

int StringLength(char sentence[]);
int NumberOfWords(char sentence[]);
int NumberOfVowels(char sentence[],int StrLength);
int VowelFreq(char sentence[],char vowel);

int main()
{
	char sentence[MaxLenght];
        printf("Enter a sentence: ");
	scanf("%[^\n]",sentence); //to make the user to enter a sentence 
	
       StringLength(sentence);	
       NumberOfWords(sentence);

       int StrLength=strlen(sentence);
       int Vowels_Counter=NumberOfVowels(sentence,StrLength);
       printf("The number of vowels in the sentence is: %d\n",Vowels_Counter);

     
       char vowel;
       printf("Enter a vowel to find its frequency: ");
       scanf(" %c",&vowel);
       int Frequency=VowelFreq(sentence,vowel);
       printf("The frequency of the vowel (%c) is: %d\n",vowel,Frequency);

}

int StringLength(char sentence[])
{
	int length = strlen(sentence); //to calculate the length of the string 
	printf("The length of the sentence is %d \n",length);

	return 0;
}

int NumberOfWords(char sentence[])
{
	int counter=0; //to count the spaces before each word 
	for(int i=0;sentence[i]!='\0';i++) //loop until the end of the string
	{
		//checks if there is a space followed by non space (new word)
		if(sentence[i] ==' ' && sentence[i+1] !=' ')
			counter++;
	}
	printf("The number of words in the sentence is : %d\n",counter+1);
	return 0;
}

int NumberOfVowels(char sentence[],int StrLength)
{
	int count=0;
        
	for(int i=0;i<StrLength;i++) 
	{
		char ch = tolower(sentence[i]); //convert the character to lower case to reduce complexity to the code
		if(ch=='a' || ch=='e' || ch=='o' || ch=='i' || ch=='u')
		{
			count++;
		}
	}
	  return count;
}

int VowelFreq(char sentence[],char vowel)
{
	int count=0;
	for(int i=0;sentence[i]!='\0';i++)
	{
		if(tolower(sentence[i])==tolower(vowel))
		{
			count++;
		}
	}
	
	return count;
}

