#include <stdio.h>



int main(void) {

	int i, j, N; 

	scanf_s("%d", &N);

	for (i = 0; i <= N-1; i++) {
		for (j = 1; j <= N - i; j++)
			printf(" "); 
		for (j = 0; j <= i; j++)
			printf("*"); 
		printf("\n");
	}

	return 0;
}
