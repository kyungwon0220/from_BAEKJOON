#include <stdio.h>
#include <stdlib.h>

int main() {
	int C; // 테스트 케이스의 개수
	int i, N, count;
	float sum;
	float *p;
	
	scanf("%d", &C);
	
	while(C) {
		//초기화
		sum = 0.0;
		count = 0;
		
		scanf("%d", &N); // 학생의 수
		
		p = (float*)malloc(sizeof(float) * N); // ' float 크기 * N ' 크기 만큼 메모리 동적 할당
		
		for(i=0; i<N; i++) {
			scanf("%f", &p[i]); // N명의 점수 입력
			//printf("debug p[%d] = %f\n", i, p[i]); //debug
			
			sum += p[i]; // N명의 점수 합산
		}
		
		for(i=0; i<N; i++) {
			if( sum/N < p[i] ) count++; // 평균을 넘는 학생 수 체킹
		}
		
		free(p); // 동적 할당 해제
		 
		printf("%.3f%%\n", count / (float)N * 100); // 평균을 넘는 학생들의 비율 출력
			/*
			최종 결과 출력이 실수형이므로 count or N 변수 中 하나는 float형으로 계산해야 한다. 
			*/
			
		C--;
	}
}