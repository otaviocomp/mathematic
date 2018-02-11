#include <stdio.h>

int main()
{
	int n, i, sum;
	printf("number of elements: ");
	scanf("%d", &n);
	int elements[n];
	elements[0] = 1;
	elements[1] = 1;
	for(i = 2; i < n; i++)
		elements[i] = elements[i - 1] + elements[i - 2];
	printf("sequency: ");	
	for(i = 0; i < n; i++)
		printf("%d ", elements[i]);
	printf("\n");
}	
		
