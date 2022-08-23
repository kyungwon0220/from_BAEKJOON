// 시간 계산 문제

#include <stdio.h>

main() {
	int H, M;
	int H_A, M_A;
	do {
		scanf("%d %d", &H, &M);
	} while(!(H>=0 && H<=23) || !(M>=0 && M<=59));
	
	if(M-45 < 0) {
		H--;
		if(H < 0) H += 24;
		M += 15;
	}	else M -= 45;
	printf("%d %d", H, M);
}