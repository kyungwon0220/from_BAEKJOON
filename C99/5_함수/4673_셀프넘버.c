// 함수 d를 정의하여 문제를 해결해 봅시다.

#include <stdio.h>

int result(int x);

main() {
	int i;
	int check[10001] = {0,}; for(i=0; i<=1000; i++) check[i] = 0; // check 배열의 값들을 0으로 초기화
	 
	for(i=0; i<=10000; i++) {
		if(result(i) <= 10000)
			check[result(i)] = 1;
	}
	// 결과 출력 
	for(i=0; i<=10000; i++) {
		if(check[i] != 1) printf("%d\n",i);
	}
}

int result(int x) {
	int sum = x;
	int size;
	
	while(x>0) {
		sum+= x%10;
		x /= 10;
	}
	
	return sum;
}