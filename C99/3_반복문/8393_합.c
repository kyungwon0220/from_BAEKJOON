// 1부터 N까지의 합을 구하는 문제. 물론 반복문 없이 풀 수도 있습니다.

#include <stdio.h>

main() {
	int i, n, sum=0;
	scanf("%d", &n);
	
	for(i=0; i<=n; i++) sum+= i;
	printf("%d",sum);
}