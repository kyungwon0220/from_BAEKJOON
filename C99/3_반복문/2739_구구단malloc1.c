// 구구단을 출력하는 문제

#include <stdio.h>
#include <stdlib.h>

main() {
	int N;
	int *p;
	
	scanf("%d", &N); // 출력하고픈 단수를 입력
	
	p = (int*)malloc(sizeof(int) * 9); // int 크기 * 9 만큼의 size 만큼을 동적 메모리 할당
	
	for(int i=0; i<9; i++) {
		p[i] = (i+1) * N;

		printf("%d * %d = %d\n", N, i+1, p[i]);
	}

	free(p); // 동적 할당 해제
}