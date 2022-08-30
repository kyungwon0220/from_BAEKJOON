// 정수를 문자열로 입력받는 문제. Python처럼 정수 크기에 제한이 없다면 상관 없으나, 예제 3은 일반적인 정수 자료형에 담기에 너무 크다는 점에 주목합시다.

#include <stdio.h>
#include <stdlib.h>

main() {
	int N;
	char *p;
	int sum=0;
	 
	scanf("%d", &N); // 숫자의 개수
	
	p = (char*)malloc(sizeof(char) * N); // ' char 크기 * N ' 크기의 메모리를 동적 할당
	
	scanf("%s", p);
	
	for(int i=0; i<N; i++)
		sum += (p[i] - 48); // 아스키 코드 ' 0 ' == 48; 
	
	free(p); // 동적 할당 해제
	
	printf("%d\n", sum); 
}