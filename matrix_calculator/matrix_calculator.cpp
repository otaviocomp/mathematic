#include <stdio.h>
#include "operators.h"

void input_values(matrix *X);

int main()
{
	matrix *A = new matrix();
	matrix *B = new matrix();
	int option = 0;
	printf("--MATRIX CALCULATOR--\n\n");
	while(option != 9)
	{
		switch(option)
		{
			case 0:
				printf("repeat this menu;\n");
				printf("-option 1 to write the matrix;\n");
				printf("-option 2 to get dimensions of the matrixes;\n");
				printf("-option 3 to print the matrixes;\n");
				printf("-option 9 to exit of the program.\n\n");
				break;	
			case 1:
				printf("matrix A:\n");
				input_values(A);
				printf("\nmatrix B:\n");
				input_values(B);
				system("clear");
				printf("done!\n");
				break;
			case 2:
				system("clear");
				printf("dimensions matrix A:\n");
				A->get_dimensions();
				printf("dimensions matrix B:\n");
				B->get_dimensions();
				break;
			case 3:	
				system("clear");
				printf("matrix A:\n");
				A->get_matrix();
				printf("matrix B:\n");
				B->get_matrix();
				break;
			case 9:
				break;
			default:
				printf("invalid option\n");
				break;
		}
		printf("option: ");
		scanf("%d", &option);
	}
	delete A, B;
	printf("program closed!\n");
}

void input_values(matrix *X)
{
	int l, c;
	printf("number of lines: ");
	scanf("%d", &l);
	printf("number of collumns: ");
	scanf("%d", &c);
	X->set_lines(l);
	X->set_collumns(c);
	X->set_matrix();
}


