// for와 if를 같이 쓰는 문제

#include <stdio.h>

main() {
	int N, X, i;
	int T[10000] = {0};
	
	scanf("%d %d", &N, &X);
	
	for(i=0; i<N; i++) scanf("%d",&T[i]);
	
	for(i=0; i<N; i++) {
		if(X>T[i]) printf("%d ", T[i]);
	}
}