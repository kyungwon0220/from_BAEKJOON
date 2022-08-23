// 평균을 조작하는 문제

#include <stdio.h>

main() {
	int N, i, max=0;
	int score[1000];
	float _new[1000]={0.0,}, sum=0.0;
	
	scanf("%d",&N); // 과목 수  
	
	for(i=0; i<N; i++) {
		scanf("%d", &score[i]); // 현재 성적 
		if(max<score[i])
			max = score[i]; // 현재 성적 中 최댓값
	}

	for(i=0; i<N; i++) {
		_new[i] = (float)score[i]/max*100;
	/*
	최종 결과는, 새로운 평균을 실수로 출력해야 하므로
	' score ' 배열을 float형으로 계산해야 한다.
	*/
		sum += _new[i];
	}
	
	// 결과(새로운 평균 출력 
	printf("%f",sum/N);
}