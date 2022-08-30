// A+B를 바로 위 문제보다 아름답게 출력하는 문제

#include <stdio.h>
#include <stdlib.h>

main() {
	int A, B;
	int *p;
	int T;
	
	scanf("%d", &T);
	
	p = (int*)malloc(sizeof(int) * T); // ' int 크기 * T ' 크기 만큼 메모리 동적 할당
	
	for(int i=0; i<T; i++) {
		scanf("%d%d", &A, &B);
		
		p[i] = A + B;
		
		printf("Case #%d: %d + %d = %d\n", i+1, A, B, p[i]);
	}
	
	free(p); // 동적 할당 해제 
}