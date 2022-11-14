// 💸

#include <stdio.h>

main() {
	unsigned long sum; // 총 금액 
	unsigned long N; // 종류의 수 
	unsigned long a, b; // 각 가격 == a, 각 개수 == b 
	unsigned long check = 0;
	
	scanf("%ld %ld", &sum, &N);
	
	for(int i=0; i<N; i++) {
		scanf("%ld %ld", &a, &b);
		check += a*b;
	}
	
	if(check == sum) printf("Yes");
	else printf("No");
}