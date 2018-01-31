#ifndef OPERATORS 
#define OPERATORS

class matrix
{
	private:
		int lines, collumns; 
		double *elements;
	public:
		void get_dimensions();
		void set_lines(int l);
		void set_collumns(int c);
		void set_matrix();
		void get_matrix();
};

void matrix::get_dimensions()
{
	printf("%dx%d\n", lines, collumns);
}

void matrix::set_lines(int l)
{
	lines = l;
}

void matrix::set_collumns(int c)
{
	collumns = c;
}

void matrix::set_matrix()
{
	int i;
	elements = new double[lines*collumns];
	printf("elements of matrix:\n");
	for(i = 0; i < lines*collumns; i++)
		scanf("%lf", &elements[i]);  
}	

void matrix::get_matrix()
{
	int i, j;
	for(i = 0; i < lines; i++)
	{
		printf("| ");
		for(j = 0; j < collumns; j++)
			printf("%lf ", elements[i*collumns + j]);
		printf("|\n");
	}
}

#endif
