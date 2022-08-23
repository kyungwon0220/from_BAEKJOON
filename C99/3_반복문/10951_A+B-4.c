// 입력이 끝날 때까지 A+B를 출력하는 문제. EOF에 대해 알아 보세요.

#include <stdio.h>

main() {
	int A, B;
	
	while( scanf("%d %d", &A, &B) != -1 )
		/*
		EOF == -1
		더이상 읽을 것이 없는 파일의 끝에 도달하기까지 입력을 받는다
		*/

		printf("%d\n", A + B);
}