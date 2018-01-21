#include <stdio.h>

long int factorial(int x);
long int factorial2(int x, int y);

int main()
{
	int n, p; 	
	long int result;
	printf("total number of amostral set: ");
	scanf("%d", &n);
	printf("number of selecteds elements: ");
	scanf("%d", &p);
	printf("\n--result--\n\n");
	result = factorial2(n, n - p)/(factorial(p));
	printf("C(%d, %d) = %d\n\n", n, p, result);
}

long int factorial(int x)
{
	long int prod = 1;
	for(x; x > 1; x--)
		prod = prod*x;
	return prod;
}

long int factorial2(int x, int y)
{
	long int prod = 1;
	for(x; x > y; x--)
		prod = prod*x;
	return prod;
}
