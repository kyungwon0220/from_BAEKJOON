// 배열을 입력받고 v를 찾는 문제

#include <stdio.h>
#include <stdlib.h>

main() {
	unsigned short N; // 정수의 개수
	unsigned short* p;
	unsigned short v; // 찾으려고 하는 정수
	unsigned short check = 0;

	scanf("%hd", &N);

	p = (unsigned short*)malloc(sizeof(unsigned short) * N); // ' unsigned short 크기 * N ' 크기 만큼 메모리 동적 할당

	for (unsigned short i = 0; i < N; i++) scanf("%hd", &p[i]);

	scanf("%hd", &v);

	for (unsigned short i = 0; i < N; i++) if (v == p[i]) check++;

    	free(p); // 동적 할당 해제
    
	printf("%hd", check);
}