// 최솟값과 최댓값을 찾는 문제

#include <stdio.h>

int val[1000000];

main() {
	int N, i;
	int max=-1000000; // 모든 정수의 한계 조건 
	int min=1000000; // 모든 정수의 한계 조건 
		
	do {
	scanf("%d",&N);
	} while(N>1000000 || N<1); // 정수의 개수 N의 입력 조건을 ' do while ' 문으로 작성해 보았다.
	
	for(i=0; i<N; i++) {
		scanf("%d",&val[i]);
		
		if(max<val[i]) // 최댓값 체킹
			max = val[i];
		
		if(min>val[i]) // 최솟값 체킹
			min = val[i];
	}
	
	printf("%d %d",min, max);
}