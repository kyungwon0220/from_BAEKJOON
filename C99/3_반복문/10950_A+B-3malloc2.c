// A+B를 여러 번 출력하는 문제

#include <stdio.h>
#include <stdlib.h>

main() {
	int T; // 테스트 케이스의 개수
	int A, B;
	int *p;
	
	scanf("%d", &T);
	
	p = (int*)malloc(sizeof(int) * T); // ' int 크기 * T ' 크기 만큼 메모리 동적 할당
	
	for(int i=0; i<T; i++) {
		scanf("%d%d", &A, &B);
		
		p[i] = A+B;
		
		printf("%d\n",p[i]);
	}
	
	free(p); // 동적 할당 해제 
}