// 각 숫자가 몇 번 나왔는지 저장하기 위해 일차원 배열을 만드는 문제

#include <stdio.h>

main() {
	int _in[3]; // 세 개의 자연수
	int i, range=1;
	int _C = 0;
	int count[10] ={0,};
	
	 // 세 개의 자연수 A × B × C
	for( i=0; i<3; i++) {
		scanf("%d",&_in[i]);
		range  *= _in[i];
	}
	
	//자리수 파악(7- 9자리
	while( range != 0) {
		range /= 10;
		++_C;
	}
	//printf("%d",_C); // debug
	
	range = _in[0] * _in[1] * _in[2];
	
	// 각 자리수별 숫자 카운트
	for(i=0; i<_C; i++) {
		count[range % 10] ++;
		range /= 10;
	}
	
	// 결과 출력
	for(i=0; i<10; i++)
		printf("%d\n",count[i]); 
}