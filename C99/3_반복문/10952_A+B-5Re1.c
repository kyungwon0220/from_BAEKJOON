// 0 0이 들어올 때까지 A+B를 출력하는 문제

#include <stdio.h>

main() {
	int A, B;
	
	while(1) {
		scanf("%d %d", &A, &B);
		if((A==0 && B==0)) break;
		//if((A<0 || B>10)) continue; // 불필요한 if문 삭제
		printf("%d\n", A + B);		
	}
}