// for와 if를 같이 쓰는 문제

#include <stdio.h>
#include <stdlib.h>

main() {
	int N, X;
	int *A;
	
	scanf("%d%d", &N , &X);
	
	A = (int*)malloc(sizeof(int) * N);
	
	for(int i=0; i<N; i++) {
		scanf("%d", &A[i]);
		
		if(A[i] < X)
			printf("%d ", A[i]);
	}
	
	free(A);
}