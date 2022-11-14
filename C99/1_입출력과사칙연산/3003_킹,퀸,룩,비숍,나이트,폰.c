//♟️

#include <stdio.h>
main() {
	static unsigned long K = 1, Q = 1, L = 2, V = 2, N = 2, P = 8;
	
	unsigned long KK, QQ, LL, VV, NN, PP;
	
	scanf("%d %d %d %d %d %d", &KK, &QQ, &LL, &VV, &NN, &PP);
	
	printf("%d %d %d %d %d %d", K-KK, Q-QQ, L-LL, V-VV, N-NN, P-PP);
}