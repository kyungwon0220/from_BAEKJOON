// 1부터 N까지 출력하는 문제

#include <stdio.h>
#include <stdlib.h>

main() {
	int N;
	int *p;
	
	scanf("%d", &N);
	 
	p = (int*)malloc(sizeof(int) * (N+1)); // ' int 크기 * (N+1) ' 크기 만큼 메모리 동적 할당
	
	for(int i=N; i>0; i--) {
		p[N] = i;
		
		printf("%d\n", p[N]);
	}
	
	free(p); // 동적 할당 해제	
}