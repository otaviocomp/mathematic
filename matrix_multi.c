#include <stdio.h>

int main()
{
	int d, i, j, k, sum = 0;

	printf("order of matrix	A and B: ");
	scanf("%d", &d);

	int A[d*d], B[d*d], C[d*d];

	printf("matrix A: ");
	for(i = 0; i < d*d; i++)
		scanf("%d", &A[i]);
	printf("matrix B: ");
	for(i = 0; i < d*d; i++)
		scanf("%d", &B[i]);

	for(i = 0; i < d; i++)
	{
		for(j = 0; j < d; j++)
		{
			for(k = 0; k < d; k++)
				sum = sum + A[i*d + k]*B[k*d + j];
			C[i*d + j] = sum;
			sum = 0;
		}
	}

	printf("\n--result--\n");
	for(i = 0; i < d; i++)
	{
		for(j = 0; j < d; j++)
			printf("%d ", C[i*d + j]);
		printf("\n");
	}
}
