#include <stdio.h>

// generate a archive in txt format of all the primes number below a number n

int main()
{
	char flag;
	long int n, i, j;
	printf("number: ");
	scanf("%lu", &n);
	FILE *file = fopen("primes.txt", "w");
	if(n > 2)
		fprintf(file, "%d ", 2);
	for(i = 3; i < n; i = i + 2)
	{
		flag = 0;
		for(j = 3; j < i; j = j + 2)
			if(i % j == 0)
				flag = 1;
		if(!flag)
			fprintf(file, "%lu ", i);
	}
	fclose(file);
}
