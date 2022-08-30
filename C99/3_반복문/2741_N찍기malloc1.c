// 1부터 N까지 출력하는 문제

#include <stdio.h>
#include <stdlib.h>

main() {
	int N;
	int *p;
	
	scanf("%d",&N);
	
	p = (int*)malloc(sizeof(int) * N); // ' int 크기 * N ' 크기 만큼 메모리 동적 할당
    
	for(int i=0; i<N; i++) {
		p[i] = i+1;
		
		printf("%d\n", p[i]);
	}
	
	free(p); // 동적 할당 해제
	
}