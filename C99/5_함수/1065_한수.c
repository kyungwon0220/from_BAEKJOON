// X가 한수인지 판별하는 함수를 정의하여 문제를 해결해 봅시다.

#include <stdio.h>

main() {
	int i, j, k, N;
	int tmp[3]; // 각 자리수의 숫자를 저장할 배열 
	int han;
	 
	scanf("%d",&N);
	
	for(i=1; i<=N; i++) {
		if(i<100) han = i; // 2자리 N 까지는 모두가 한수이기 때문에
		else if(i == 1000) break; // 문제의 조건인 최대치 1000은 한수가 아니기 때문에 break 
		else{
			
			j=0;
			k=i;
			
			// 각 자리수 분리 
			while( k>0 ) {
				tmp[j] = k%10;
				k /= 10;
				j++;
			}
			
			if(tmp[0] - tmp[1] == tmp[1] - tmp[2]) han++; // 각 자리수끼리의 차가 같으면 한수
			
		}
	}
	
	printf("%d\n",han); 
}