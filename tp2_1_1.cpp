#include <stdio.h>
#include <stdlib.h>

#define N 4
#define M 5

int main(void) 
{
	int f,c;
	float mt [N] [M];

	for(int f = 0 ; f<N ; f++)
	{
		for (int c = 0; c < N; c++)
		{
			printf("%f \n", mt[f][c]);
		}
		printf("\n");

		return 0;
	}
}