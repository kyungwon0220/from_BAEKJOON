// 1부터 N까지 출력하는 문제

#include <stdio.h>

main() {
	int i, N;
	scanf("%d", &N);
	
	for(i=N; i>=1; i--) printf("%d\n",i);
}