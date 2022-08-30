// OX 퀴즈의 결과를 일차원 배열로 입력받아 점수를 계산하는 문제

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
	int N;

	scanf("%d", &N); // 총 테스트 케이스 수

	while (N) {
		int score = 0;
		int sum = 0;

		/* 입력한 테스트 케이스 길이 만큼만 메모리 동적 할당 해보기 */
		//{
		char* want_CaseSize;
		// 최초 입력을 동적 메모리로 ' 입력해야만, ' 불필요한 메모리 할당을 해제가 가능하다.
		char* CaseSize;

		want_CaseSize = (char*)malloc(sizeof(char) * 80); // ' char 크기 * 80 ' 크기 만큼 메모리 동적 할당

		scanf("%s", want_CaseSize); // 테스트 케이스 입력

		CaseSize = (char*)malloc(sizeof(char) * strlen(want_CaseSize) + 1); // ' \0 ' 값이 들어갈 공간을 위해 +1
		strcpy(CaseSize, want_CaseSize);

		free(want_CaseSize); // 동적 할당 해제

		//printf("%d", strlen(CaseSize)); // debug
		//}


		// 점수
		for (int i = 0; i < strlen(CaseSize); i++) {
			if (CaseSize[i] == 'O') {
				score++;
				sum += score;
			}
			else if (CaseSize[i] == 'X') score = 0;
		}

		free(CaseSize);
		N--;
		//각 테스트 케이스 점수 출력(결과
		printf("%d\n", sum);
	}
}