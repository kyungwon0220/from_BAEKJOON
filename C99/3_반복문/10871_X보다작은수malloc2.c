// for와 if를 같이 쓰는 문제

#include <stdio.h>
#include <stdlib.h>

main() {
	int N, X;
	int *A;
	
	scanf("%d%d", &N, &X);
	
	A = (int*)malloc(sizeof(int) * N); // ' int 크기 * N ' 크기 만큼 메모리 동적 할당
	
	for(int i=0; i<N; i++) {
		scanf("%d", &A[i]);
		
		if(A[i] < X) printf("%d ",A[i]);
	}
	
	free(A); // 동적 할당 해제 
}