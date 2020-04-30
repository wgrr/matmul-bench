#include <stdio.h>
#include <stdlib.h>

#include <sys/time.h>

#define n 4096

int
main()
{
	int i, j, k;
	struct timeval start, stop;
	float diff;

	static double A[n][n];
	static double B[n][n];
	static double C[n][n];

	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++) {
			A[i][j] = (double)rand() / (double)RAND_MAX;
			B[i][j] = (double)rand() / (double)RAND_MAX;
			C[i][j] = 0;
		}

	gettimeofday(&start, NULL);

	for (i = 0; i < n; i++)
	for (j = 0; j < n; j++)
	for (k = 0; k < n; k++)
		C[i][j] += A[i][k] * B[k][j];

	gettimeofday(&stop, NULL);

	diff = (stop.tv_sec - start.tv_sec) + 1e-9 * (stop.tv_usec - start.tv_usec);

	fprintf(stderr, "time: %.9f\n", diff);

	for (i = 0; i < n; i++)
	for (j = 0; j < n; j++)
		printf("%f", C[i][j]);

	fflush(stdout);
	return 0;
}
