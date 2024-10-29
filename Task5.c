#include <stdio.h>  

void MatricVectorMultiplication(int rows,int columns,int A[10][10],int x[10],int result[10])
{
	for(int i=0;i<rows;i++)
	{
		result[i]=0;

		for(int j=0;j<columns;j++)
		{
			result[i]+=A[i][j]*x[j];
		}
	}
}

int main()
{
    int rows;
    int columns; 
    int A[10][10];  //A = matrix
    int x[10];    // x = vector
    int result[10];


    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &columns); 

    printf("Enter the elements of the matrix (%d x %d):\n",rows,columns);
    for (int i = 0; i<rows; i++)
    { 
        for (int j = 0; j < columns; j++)
       	{ 
            printf("Element [%d][%d]: ", i, j); 
            scanf("%d", &A[i][j]); 
        }
    }

    printf("Enter the elements of the vector (%d elements):\n",columns);
    for (int i = 0; i < columns; i++) { 
        printf("Element [%d]: ", i); 
        scanf("%d", &x[i]); 
    }


    MatricVectorMultiplication(rows,columns,A, x,result);

    printf("The resulting vector is:\n");
    for (int i = 0; i < rows; i++) { 
        printf("Element [%d]: %d\n", i, result[i]); 
    }
    return 0; 
}

