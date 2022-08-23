// 별을 찍는 문제 1

#include <stdio.h>

main() {
	int i, j;
	int N, m=1;
	
	scanf("%d", &N);
	
	for(i=0; i<N; i++) {
		for(j=1; j<=m; j++) {
			printf("*");
		}
		m++;
		printf("\n");
	}
}