// 최솟값과 최댓값을 찾는 문제

#include <stdio.h>
#include <stdlib.h>

int main() {
	int N; // 정수의 개수 
	int *p;
	int max = -1000000; // 모든 정수의 한계 조건
	int min = 1000000; // 모든 정수의 한계 조건
		
	scanf("%d", &N);
	 
	p = (int*)malloc(sizeof(int) * N); // ' int 크기 * N ' 크기 만큼 메모리 동적 할당
	
	for(int i=0; i<N; i++) {
		scanf("%d", &p[i]);
		
		if(p[i] > max) max = p[i]; // 최댓값 체킹
		if(p[i] < min) min = p[i]; // 최솟값 체킹
	}
	
	free(p); // 동적 할당 해제 
	
	printf("%d %d", min, max);
}