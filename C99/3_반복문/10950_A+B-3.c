// A+B를 여러 번 출력하는 문제

#include <stdio.h>

main() {
	int A, B, j, i;
	
	scanf("%d", &j);
	
	for(i=0; i<j; i++) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A+B);
	}
}