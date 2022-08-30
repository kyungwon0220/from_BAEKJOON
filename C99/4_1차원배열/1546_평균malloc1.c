// 평균을 조작하는 문제

#include <stdio.h>
#include <stdlib.h>

int main() {
	int N;
	int M=0; // ' 현재 성적 ' 中 최댓값
	float sum=0.0;
	float *p;
	
	scanf("%d", &N); // 과목의 개수 
	
	p = (float*)malloc(sizeof(float) * N); // ' float 크기 * N ' 크기 만큼 메모리 동적 할당
	 
	for(int i=0; i<N; i++) {
		scanf("%f", &p[i]); // 현재 성적 입력
		
		if(p[i] > M) M = p[i]; // 점수 中 최댓값 체킹
	}
	
	for(int i=0; i<N; i++) {
		p[i] = p[i]/M*100; // 점수 조작
		sum += p[i]; // 조작된 점수들의 합 
	}
	
	printf("%f", sum/N); // 조작된 평균 출력 
	
	free(p); // 동적 할당 해제
}