// 최댓값이 어디에 있는지 찾는 문제

#include <stdio.h>

main() {
	int N[9]; // 입력 조건(9개의 자연수
	int i, turn, max=0;
	
	for(i=0; i<9; i++) {
		scanf("%d",&N[i]);
		
		if(max<N[i]) { // 최댓값 체킹
			max = N[i];
			turn = i+1;
		}
	}
	
	printf("%d\n%d",max,turn);
}