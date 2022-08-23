// 구구단을 출력하는 문제

#include <stdio.h>

main() {
	int dan, i;
	scanf("%d", &dan);
	
	for(i=1; i<10; i++) printf("%d * %d = %d\n", dan, i, dan*i);
}