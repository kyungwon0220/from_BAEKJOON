#include <stdio.h>
#include <stdlib.h>

main() {
	int* N; // 입력받을 수 10개
	int* Nper42; // N 을 42로 나눈 나머지 10개
	int count = 1; // 서로 다른 값의 개수
	int i, j;

	N = (int*)malloc(sizeof(int) * 10); // ' int 크기 * 10 ' 크기 만큼 메모리 동적 할당
	Nper42 = (int*)malloc(sizeof(int) * 10); // ' int 크기 * 10 ' 크기 만큼 메모리 동적 할당
	
	for (int i = 0; i < 10; i++) {
		scanf("%d", &N[i]);
		Nper42[i] = N[i]%42;
	}

	free(N); // 동적 할당 해제

	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 10; j++) if (Nper42[i] == Nper42[j]) break; // 서로 같은 수일 경우
		
		if (j == 10) count++;
	}

	free(Nper42); // 동적 할당 해제

	printf("%d\n", count);
}