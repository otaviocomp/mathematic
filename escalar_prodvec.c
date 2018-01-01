#include <stdio.h>

void input_vars(double vector_A[], double vector_B[]); 
double escalar_prod(double vector_A[], double vector_B[]);

int main()
{
	double vector_A[2], vector_B[2]; 
	input_vars(vector_A, vector_B); 
	double result = escalar_prod(vector_A, vector_B);
	printf("result = %lf\n", result);
}

void input_vars(double vector_A[], double vector_B[])
{
	printf("value of vector A:\n");
	printf("value of x = ");
	scanf("%lf", &vector_A[0]);
	printf("value of y = ");
	scanf("%lf", &vector_A[1]);
	printf("value of vector B:\n");
	printf("value of x = ");
	scanf("%lf", &vector_B[0]);
	printf("value of y = ");
	scanf("%lf", &vector_B[1]);
}

double escalar_prod(double vector_A[], double vector_B[])
{
	return vector_A[0]*vector_B[0] + vector_A[1]*vector_B[1];
}
