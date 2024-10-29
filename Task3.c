#include<stdio.h>

int Add(int a, int b)
{
	return a+b;
}


float Float(float a,float b)
{
	return a+b;
}


float Area_of_Circle()
{
        float pi,r;
        printf("Enter the value of the Pi: ");
        scanf("%f",&pi);

        printf("Enter the vlaue of the radius(r): ");
        scanf("%f",&r);

        float Area=pi*r;

        return Area;
}


float Area_of_Rectangle()
{
	float l,w;
	printf("Enter the value of the length (l): ");
	scanf("%f",&l);

	printf("Enter the vlaue of the width(w): ");
	scanf("%f",&w);

	float Area=l*w;

        return Area;
}

void Factorial()
{
	int number;
	int factorial=1;
	printf("Enter a number: ");
	scanf("%d",&number);

	for (int i=1;i<=number;i++)
	{
		factorial=factorial*i;
	}
	        printf("Factorial of %d is: %d\n",number,factorial);
}



int main()
{
	int Sum1=Add(37,98);
	printf("The result of the addition of the two number is: %d\n",Sum1);

	float Sum2=Float(5.68,9.569);
	printf("The result of the addition of the two floating point number is: %f\n",Sum2);

	printf("\nArea of circle: \n");
	float area1=Area_of_Circle();
        printf("The area of the circle is: %.2f\n\n",area1);

	printf("Area of rectangle: \n");
	float area2=Area_of_Rectangle();
	printf("The area of the rectangle is: %.2f\n\n",area2);

	Factorial();
       

}
