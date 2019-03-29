#include <stdio.h>
#include <stdlib.h>

#define N 4
#define M 5


int main(void) 
{
	double mt [N][M];
	double *pmt;
	int f,c;


	for(int f = 0 ; f<N ; f++)
	{
		for (int c = 0; c < M; c++)
		{
			printf("%f \n", *pmt);
		}
		printf("\n");

		return 0;
	}
}