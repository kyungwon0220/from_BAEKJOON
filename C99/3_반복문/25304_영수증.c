// πΈ

#include <stdio.h>

main() {
	unsigned long sum; // μ΄ κΈμ‘ 
	unsigned long N; // μ’λ₯μ μ 
	unsigned long a, b; // κ° κ°κ²© == a, κ° κ°μ == b 
	unsigned long check = 0;
	
	scanf("%ld %ld", &sum, &N);
	
	for(int i=0; i<N; i++) {
		scanf("%ld %ld", &a, &b);
		check += a*b;
	}
	
	if(check == sum) printf("Yes");
	else printf("No");
}