// 별을 찍는 문제 2

#include <stdio.h>

main() {
	int i, j, k;
	int N, m=1;
	
	scanf("%d", &N);
	
	for(i=1; i<=N; i++) {
		for(k=N-m; k>0; k--) printf(" ");
		for(j=1; j<=m; j++) printf("*");
		
		printf("\n");
		m++;
	}
}