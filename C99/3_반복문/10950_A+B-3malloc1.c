// A+B를 여러 번 출력하는 문제

#include <stdio.h>
#include <stdlib.h>

main() {
	int T;
	int *p;
	
	scanf("%d",&T);
	
	p = (int*)malloc(sizeof(int) * T * 2);
	
	for(int i=0; i<T*2; i+=2) {
		scanf("%d%d", &p[i], &p[i+1]);
		printf("%d\n", p[i] + p[i+1]);
		//printf("%d\n",i); // debug
	}
	
	free(p);
}