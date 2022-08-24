// 정수를 문자열로 입력받는 문제. Python처럼 정수 크기에 제한이 없다면 상관 없으나, 예제 3은 일반적인 정수 자료형에 담기에 너무 크다는 점에 주목합시다.

#include <stdio.h>

main() {
	int N, i, sum=0;
	char num[101];
	
	scanf("%d",&N);
	//printf("%d\n",N); // debug
	scanf("%s",num);
	
	for(i=0; i<N; i++) {
		sum += (int)num[i] -'0'; // 아스키 코드 '0' == (int)48; 
	}
	
	// 결과 출력 
	printf("%d\n",sum);
}