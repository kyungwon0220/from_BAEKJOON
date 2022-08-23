// A+B를 조금 더 아름답게 출력하는 문제

#include <stdio.h>

main() {
	int i, N;
	int A, B;
	
	scanf("%d", &N);
	
	for(i=1; i<=N; i++) {
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d\n", i, A + B);
	}
}