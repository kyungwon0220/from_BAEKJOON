#include <stdio.h>

main() {
	int _C=1; // 총 테스트 케이스의 개수 
	int _N, i;  // 각 테스트 학생 수 
	float _sco[1001]; // 각 테스트 학생들의 점수 
	float sum, avg;
	int _count; // 평균을 넘는 학생 수 
	scanf("%d",&_C);
	
	while( _C != 0 ) {
		sum=0.0;
		avg=0.0;
		_count=0;
		scanf("%d",&_N);
		
		for(i=0; i<_N; i++) {
			scanf("%f",&_sco[i]);
			sum+=_sco[i];
		}
		avg = sum/_N; // 각 테스트 학생들의 평균 
		
		// 평균을 넘는 학생 수 카운트 
		for(i=0; i<_N; i++) {
			if(avg<_sco[i]) _count++;
		}
		
		// 결과(평균을 넘는 학생들의 비율 출력 
		printf("%.3f\%\n",((float)_count/(float)_N)*100);

		_C--;
	}
}