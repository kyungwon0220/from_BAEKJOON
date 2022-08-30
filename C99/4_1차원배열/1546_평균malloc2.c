// 평균을 조작하는 문제

#include <stdio.h>
#include <stdlib.h>

main() {
	int N;
	float *p;
	float M = 0.0;
	float sum=0.0;
	
	scanf("%d", &N); // 시험 본 과목의 개수
	
	p = (float *)malloc(sizeof(float) * N); // ' int 크기 * N ' 크기 만큼 메모리 동적 할당
	
	for(int i=0; i<N; i++) {
		//printf("sizeof(p) = %d\n", sizeof(p[i])); // debug
		scanf("%f", &p[i]);
		//printf("p[%d] = %f\n", i, p[i]); // debug
        
		if(M < p[i]) M = p[i]; // 현재 점수 中 최댓값
	}
	
	for(int i=0; i<N; i++) {
		p[i] /= M;
		sum += p[i]; // 고친 점수 합계
	}
	
    free(p); // 동적 할당 해제
    
	printf("%f\n", sum/N*100); // 결과(새로운 평균 출력
}