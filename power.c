#include <stdio.h>

#define N 1000000

void main()
{
	int number[N], carry = 0, n, b, pot, i, m = 0, flag, sum = 0;
	number[0] = 1;
	printf("base: ");
	scanf("%d", &b);
	printf("pot: ");
	scanf("%d", &n);
	for(pot = 1; pot <= n; pot++)
	{
		for(i = 0; i <= m; i++) 
		{
			flag = 0;	
			number[i] = b*number[i] + carry;
			carry = 0;
			if(number[i] > 9)
			{
				carry = number[i] / 10;
				number[i] = number[i] % 10;
				flag = 1;
			}
		}
		if(carry > 0 && flag == 1)
		{
			number[i] = carry;
			m++;
		}
		carry = 0;
	}
	printf("result = ");
	for(m; m >= 0; m--)
		printf("%d", number[m]);
	printf("\n");	
}
