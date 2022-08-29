// 입력이 끝날 때까지 A+B를 출력하는 문제. EOF에 대해 알아 보세요.

#include <stdio.h>

main() {
	int A, B;
	
	while(scanf("%d %d", &A, &B) != EOF)
		printf("%d\n", A + B);
}