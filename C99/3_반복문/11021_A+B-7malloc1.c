// A+B를 조금 더 아름답게 출력하는 문제

#include <stdio.h>
#include <stdlib.h>

main() {
	int A, B;
	int N;
	int *p;
	
	scanf("%d", &N); // 테스트 케이스의 개수
		
	p = (int*)malloc(sizeof(int) * N); // ' int 크기 * N ' 크기 만큼 메모리 동적 할당
	
	for(int i=0; i<N; i++) {
		scanf("%d%d", &A, &B);
		
		p[i] = A + B;
		
		printf("Case #%d: %d\n", i+1, p[i]);
	}
	
	free(p); // 동적 할당 해제 
}