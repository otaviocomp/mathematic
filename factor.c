#include <stdio.h>
#include <stdlib.h>

int main()
{
	int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41}, n, i = 0, j = 0;
	int *factors = malloc(10*sizeof(int));
	printf("number: ");
	scanf("%d", &n);
	while(n > 1)
	{
		if(!(n % primes[i]))
		{
			factors[j++] = primes[i];
			n = n / primes[i];
		}
		else
			i++;
	}
	printf("factors = ");
	for(--j; j >= 0; j--)
		printf("%d ", factors[j]);
	printf("\n");
}
