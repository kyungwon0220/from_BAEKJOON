// 1부터 N까지의 합을 구하는 문제. 물론 반복문 없이 풀 수도 있습니다.

#include <stdio.h>
#include <stdlib.h>

main() {
	int n;
	int *p;
	int sum=0;
	
	scanf("%d",&n);
	
	p = (int*)malloc(sizeof(int) * n); // ' int 크기 * n ' 크기 만큼 메모리 동적 할당
	
	for(int i=0; i<n; i++) {
		p[i] = i+1;
		sum += p[i];
	}
	
	printf("%d\n",sum);
	
	free(p); // 동적 할당 해제
}