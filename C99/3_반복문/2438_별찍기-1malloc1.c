// 별을 찍는 문제 1

#include <stdio.h>
#include <stdlib.h>

main() {
	int N, tmp=0;
	int *p;
	static int k=0;
	
	scanf("%d", &N);
	
	for(int i=1; i<=N; i++)
		tmp += i; // 1부터 N까지의 합 
	 
	p = (int*)malloc(sizeof(int) * tmp); // ' int 크기  * tmp ' 크기 만큼 메모리 동적 할당
	
	for(int i=0; i<N; i++) {
		for(int j=0; j<=i; j++) {
			p[k] = 42; // 아스키 코드 '*' == 42;
			printf("%c",p[k++]);
		}
		
		printf("\n");
	}
	
	free(p); // 동적 할당 해제
}